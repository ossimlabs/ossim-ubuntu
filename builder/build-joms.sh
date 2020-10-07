#!/bin/bash

cd /work/ossim-oms/joms/

if [ ! -d local.properties ] ; then
    cp local.properties.template local.properties
fi

ant mvn-install

# Hack to fix linking on alpine
./fix-libjoms.sh
cp libjoms.so $OSSIM_INSTALL_PREFIX/lib64
strip $OSSIM_INSTALL_PREFIX/lib64/libjoms.so
