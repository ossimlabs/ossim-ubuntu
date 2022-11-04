#!/bin/sh 

IMAGE=ossim-ubuntu-dist
VERSION=$(grep projectVersion ../gradle.properties | awk -F"=" '{ print $2 }')

docker save $IMAGE:$VERSION | gzip > ${IMAGE}_${VERSION}.tar.gz
