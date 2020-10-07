#!/bin/bash
# Make sure we start execution at the script directory:
pushd `dirname ${BASH_SOURCE[0]}`/../..
export OSSIM_DEV_HOME=$PWD
export DEEPCORE_HOME=$OSSIM_DEV_HOME/ossim-deepcore
popd

echo DEEPCORE_HOME=$DEEPCORE_HOME
if [ -d $OSSIM_DEV_HOME/ossim-sandbox ] ; then
   source $OSSIM_DEV_HOME/ossim-sandbox/common.sh $1
fi

if [ -z "$DEEPCORE_BUILD_DIR" ]; then
  export DEEPCORE_BUILD_DIR="$OSSIM_DEV_HOME/build"
fi
mkdir -p $OSSIM_INSTALL_PREFIX
if [[ -n  $ARTIFACT_TYPE ]]; then
   tar xvf ossim-sandbox-${ARTIFACT_TYPE}-runtime.tgz -C $OSSIM_INSTALL_PREFIX
   tar xvf ossim-${ARTIFACT_TYPE}-dev.tgz -C $OSSIM_INSTALL_PREFIX
   JENKINSBUILD=true
else
   export ARTIFACT_TYPE=`uname`
   JENKINSBUILD=false
fi

export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:$OSSIM_INSTALL_PREFIX/lib:$OSSIM_INSTALL_PREFIX/lib64
mkdir -p $DEEPCORE_BUILD_DIR
pushd $DEEPCORE_BUILD_DIR

echo "Running cmake..."
echo cmake -DOSSIM_INSTALL_PREFIX=$OSSIM_INSTALL_PREFIX -DCMAKE_INSTALL_PREFIX=$OSSIM_INSTALL_PREFIX  $DEEPCORE_HOME

cmake -DOSSIM_INSTALL_PREFIX=$OSSIM_INSTALL_PREFIX -DCMAKE_INSTALL_PREFIX=$OSSIM_INSTALL_PREFIX  $DEEPCORE_HOME
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
echo "Successfully built plugin"
popd

if $JENKINSBUILD; then
  pushd $OSSIM_INSTALL_PREFIX

   tar cvfz $OSSIM_DEV_HOME/ossim-deepcore-plugin-${ARTIFACT_TYPE}.tgz `find . -name libossim_deepcore_plugin.so`
   tar cvfz $OSSIM_DEV_HOME/ossim-sandbox-with-deepcore-${ARTIFACT_TYPE}.tgz *
   popd
fi

echo "Done."
exit 0
