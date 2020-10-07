#!/bin/sh

for x in ossim/ ossim-oms/ ossim-plugins/ ossim-private/ ossim-video/; do cd $x; git pull; cd ..; done
