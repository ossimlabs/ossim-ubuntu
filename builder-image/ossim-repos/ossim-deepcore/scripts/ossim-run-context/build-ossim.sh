#!/bin/bash
####################################################################################################
#
#  This script is launched from inside the ossim-build-context container. It builds OSSIM libs and
#  executables. The product files will be in the
#  install temporary directory. They will be copied into the final ossim-run-context docker image.
#
####################################################################################################

export BUILD_OSSIM_QT4=ON
export BUILD_PNG_PLUGIN=ON
export BUILD_CNES_PLUGIN=ON
export BUILD_GDAL_PLUGIN=ON
export BUILD_OSSIM_DEEPCORE=ON
export OSSIM_DEV_HOME=$PWD
export OSSIM_BUILD_DIR=$PWD/build
export OSSIM_INSTALL_PREFIX=$PWD/install

mkdir -p $OSSIM_BUILD_DIR

echo "Running OSSIM cmake"
ossim/cmake/scripts/ossim-cmake-config.sh
if [ $? != 0 ]; then
  echo "Error in cmake config"ll
  exit 1
fi

echo "Running OSSIM make"
pushd $OSSIM_BUILD_DIR
make -j 8
if [ $? != 0 ]; then
  echo "Error encountered during make"
  exit 1
fi
echo "Running OSSIM install"
make install
if [ $? != 0 ]; then
  echo "Error encountered during make install"
  exit 1
fi
popd

echo "Done."
exit 0
