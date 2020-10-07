#!/bin/bash
####################################################################################################
#
# The docker build image command requires all files and subdirs to be located in the same directory
# as the Dockerfile, so the build scipt (../../build-docker-image.sh) copies and clones many items
# into this directory before building the image. This script deletes all copied items. It is
# usually run as part of the build script but can be run standalone as root.
#
####################################################################################################

DELETION_LIST=(geoids \
               level0 \
               ossim \
               ossim-plugins \
               ossim-qt4 \
               ossim-deepcore \
               install \
               build)

pushd ossim-run-context
for f in ${DELETION_LIST[@]}; do
   if [ -d "$f" ]; then
      sudo rm -rf $f
   elif [ -f "$f" ]; then
      sudo rm $f
   fi
done
popd