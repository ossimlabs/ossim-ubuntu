#!/bin/sh
docker run -it --rm -v $PWD:/scripts -v $OSSIM_DATA:/data ossim-builder-ubuntu 
