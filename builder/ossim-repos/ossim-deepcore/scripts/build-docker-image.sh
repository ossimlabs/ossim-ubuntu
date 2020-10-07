#!/bin/bash
####################################################################################################
#
#  This script ultimately builds the ossim-run-context docker image for executing OSSIM applications.
#
#  Usage:  build-docker-image.sh [-f] [-x]
#
#  Options
#     -f     Force rebuild of ossim-build-context image
#     -x     Skip cleanup of working directories on termination.
#
#  The following are the steps performed:
#
#  1. Create the ossim-build-context image. This docker image contains all OSSIM dependency SDKs
#     and build tools (gcc, cmake, make, etc.) needed for building the OSSIM library, plugins
#     and executables, as well as the libraries and executables needed.
#
#  2. In anticipation of building the final ossim-run-context image, all the necessary repos,
#     directories, and files are copied to the current directory so that they are available to
#     the docker build environment. It is necessary to be on the DirectStream VPN to access
#     the FPGA component code.
#
#  3. The ossim-build-context image is run, and the build-ossim.sh script is run inside the
#     container. This script uses the ossim build context to compile and link the OSSIM libraries,
#     executables, plugin libraries and executables. The product binaries are saved to a local
#     temporary install direcory.
#
#  4. Build the ossim-run-context image. The image is based on the ossim-build-context image. It
#     copies all binaries and other needed data from the local file system into the container image.
#
#  5. Save the ossim-run-context image to a tar file and delete all temporary directories, repos,
#     and files that were created for the build.
#
#  Author: Oscar Kramer, oscar.kramer@maxar.com
#
####################################################################################################
# Uncomment following line to debug script line by line:
#set -x; trap read debug

if [ "$1" == "-h" ] ; then
   echo;
   echo "  Usage $0 [-f] [x]";
   echo
   echo "  Options"
   echo "     -f     Force rebuild of ossim-build-context image"
   echo "     -x     Skip cleanup of working directories on termination."
   echo
   exit 0
fi

FORCE_REBUILD=false
if [ "$1" == "-f" ] ; then
   FORCE_REBUILD=true;
fi

DO_CLEANUP=true
if [ "$1" == "-x" ] ; then
   DO_CLEANUP=false;
fi

# Make sure we start execution at the script directory:
pushd `dirname ${BASH_SOURCE[0]}`

if $FORCE_REBUILD; then
   # Build the docker image that will serve as the base for the final ossim-run-context image.
   # This image will contain all OSSIM dependencies and build tools needed to build OSSIM apps:
   echo; echo "### Deleting any running ossim-build-context image and container. ###"; echo
   docker rm ossim-build-context
   docker rmi ossim-build-context:$DOCKER_TAG
   pushd ossim-build-context
   echo; echo "### Building ossim-build-context-image. ###"; echo
   docker build --force-rm -t ossim-build-context:$DOCKER_TAG .
   if [ $? != 0 ]; then
     echo "Error building ossim-build-context image"
     popd; exit 1
   fi
   popd  # back to script dir
else
   echo; echo "Skipping build of ossim-build-context"
fi

# Build the docker image that will contain all OSSIM and client_app applications and scripts.
echo; echo "### Deleting any running ossim-run-context image and container. ###"; echo
docker rmi ossim-run-context:$DOCKER_TAG
pushd ossim-run-context

# Bring in all needed repos if not already here:
if [ ! -d "ossim" ]; then  # was clean-up done?
   echo; echo "### Cloning all needed repositories ###"; echo
   git clone --branch dev --single-branch git@github.com:ossimlabs/ossim.git
   git clone --branch dev --single-branch git@github.com:ossimlabs/ossim-plugins.git
   git clone --branch dev --single-branch git@github.com:ossimlabs/ossim-qt4.git
   git clone --branch dev --single-branch git@github.com:Maxar-Corp/ossim-deepcore.git

   # The final container will need some data items so copy them here:
   echo; echo "### Copying elevation data to current directory. ###"; echo
   cp -R $OSSIM_DATA/elevation/dted/level0 .
   cp -R $OSSIM_DATA/elevation/geoids .
fi

# Build OSSIM and client_app inside the ossim-build-context container
echo; echo "### Building libs and applications in ossim-build-context container. ###"; echo
docker run --rm -w /home/ossim \
   --mount type=bind,source=$PWD,target=/home/ossim \
   --mount type=bind,source=/data,target=/data \
   ossim-build-context:latest ./build-ossim.sh
if [ $? != 0 ]; then
  echo "Error building ossim in ossim-build-context container."
  popd ; exit 1
fi

# Now build the ossim-context image that will contain all apps:
echo; echo "### Building ossim-run-context image ###"; echo
docker build --force-rm -t ossim-run-context:$DOCKER_TAG .
if [ $? != 0 ]; then
  echo "Error building ossim-run-context."
  popd ; exit 1
fi

popd  # Back to script dir
if $DO_CLEANUP; then
   echo; echo "### Deleting temporary files and repos ###"; echo
   ./clean-up.sh
   if [ $? != 0 ]; then
     echo "Error cleaning up docker temporary directories."
     popd ; exit 1
   fi
fi

echo; echo "### Saving ossim-run-context image to tar file to $PWD ###"; echo
docker save -o ossim-run-context:$DOCKER_TAG.tar ossim-run-context:$DOCKER_TAG
if [ $? != 0 ]; then
  echo "Error saving ossim-run-context to tar file."
  popd ; exit 1
fi

popd  # Back to original working directory
echo; echo "### Success ###"; echo
