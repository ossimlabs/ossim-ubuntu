#!/bin/bash
# Make sure we start execution at the script directory:
pushd `dirname ${BASH_SOURCE[0]}`/../..
export OSSIM_DEV_HOME=$PWD
export OSSIM_QT4_HOME=$OSSIM_DEV_HOME/ossim-qt4
popd

echo OSSIM_QT4_HOME=$OSSIM_QT4_HOME
if [ -d $OSSIM_DEV_HOME/ossim-sandbox ] ; then
   source $OSSIM_DEV_HOME/ossim-sandbox/common.sh $1
fi

if [ -z "$BUILD_DIR" ]; then
  export BUILD_DIR="$OSSIM_QT4_HOME/build"
fi
mkdir -p $OSSIM_INSTALL_PREFIX
if [[ -n  $TYPE ]]; then
   tar xvf ossim-sandbox-${TYPE}-runtime.tgz -C $OSSIM_INSTALL_PREFIX
   tar xvf ossim-${TYPE}-dev.tgz -C $OSSIM_INSTALL_PREFIX
   tar xvf qt4-${TYPE}.tgz -C $OSSIM_INSTALL_PREFIX
   JENKINSBUILD=true
else
   export TYPE=`uname`
   JENKINSBUILD=false
fi

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$OSSIM_INSTALL_PREFIX/lib:$OSSIM_INSTALL_PREFIX/lib64
mkdir -p $BUILD_DIR
pushd $BUILD_DIR

echo "Running cmake with:"
echo cmake -DOSSIM_INSTALL_PREFIX=$OSSIM_INSTALL_PREFIX -DCMAKE_INSTALL_PREFIX=$OSSIM_INSTALL_PREFIX -DQT_BINARY_DIR=$OSSIM_INSTALL_PREFIX $OSSIM_QT4_HOME
cmake -DOSSIM_INSTALL_PREFIX=$OSSIM_INSTALL_PREFIX -DCMAKE_INSTALL_PREFIX=$OSSIM_INSTALL_PREFIX -DQT_BINARY_DIR=$OSSIM_INSTALL_PREFIX $OSSIM_QT4_HOME

if [ $? != 0 ]; then
  echo "Error in cmake config"
  exit 1
fi

echo "Running make..."
make -j 8 install
if [ $? != 0 ]; then
  echo "Error encountered during make"
  exit 1
fi
echo "Successfully built apps"
popd

if $JENKINSBUILD; then
  pushd $BUILD_DIR
  tar xvf $OSSIM_DEV_HOME/qt4-${TYPE}.tgz
  tar cvfz $OSSIM_DEV_HOME/ossim-qt4-${TYPE}.tgz bin lib lib64 include
  popd
fi

echo "Done."
exit 0
