#!/bin/sh
docker run -it --rm \
-v $OSSIM_DATA:/data \
ossim-ubuntu-dist $*
