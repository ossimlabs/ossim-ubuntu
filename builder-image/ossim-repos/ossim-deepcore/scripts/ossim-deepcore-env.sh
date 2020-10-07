#!/bin/bash

echo
read -p "Enter OSSIM install path: " ossimInstallPath
read -p "Enter OSSIM data path: " ossimDataPath

export OSSIM_DATA=$ossimDataPath
export OSSIM_INSTALL_PREFIX=$ossimInstallPath
export PATH=$OSSIM_INSTALL_PREFIX/bin:$PATH
export LD_LIBRARY_PATH=$OSSIM_INSTALL_PREFIX/lib64:$LD_LIBRARY_PATH

cp $OSSIM_INSTALL_PREFIX/share/ossim/ossim-preferences-template ossim-deepcore.config
export OSSIM_PREFS_FILE=$PWD/ossim-deepcore.config

echo
echo "OSSIM_INSTALL_PREFIX = $OSSIM_INSTALL_PREFIX"
echo "OSSIM_DATA           = $OSSIM_DATA"
echo "PATH                 = $PATH"
echo "LD_LIBRARY_PATH      = $LD_LIBRARY_PATH"

echo
echo "Make sure you add libossim_deepcore_plugin.so to the list of plugins in ossim-site-preferences."
echo "The numbers need to be in order. You can put it at the end of the list."
read -p "Press <enter> to edit preferences with vi now, else <ctrl-C>"
vi $OSSIM_PREFS_FILE

echo
echo "Preferences saved to $OSSIM_PREFS_FILE"
echo

