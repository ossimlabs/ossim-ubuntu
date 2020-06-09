#!/bin/sh

ln ../compile-ossim/output/ossim-dist-minimal-ubuntu.tgz ./
docker build -t ossim-runtime-minimal-ubuntu:local "$@" . 

