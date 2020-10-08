#FROM nexus-docker-public-group.ossim.io/ubuntu:18.04
#FROM nexus-docker-public-hosted.ossim.io/omar-micro-base:latest as builder
FROM ossim-builder-ubuntu:latest as builder
FROM ubuntu:18.04

WORKDIR /work

ENV SPRING_CLOUD_CONFIG_ENABLED=false \
    SPRING_CLOUD_DISCOVERY_ENABLED=false \
    OSSIM_DATA=/data \
    OSSIM_INSTALL_PREFIX=/usr/local \
    OSSIM_PREFS_FILE=/usr/local/share/ossim/ossim-preferences-template \
    LD_LIBRARY_PATH=/usr/local/lib64:/usr/local/lib:/usr/local/lib/x86_64-linux-gnu:$LD_LIBRARY_PATH \
    PATH=/usr/local/bin:$PATH \
    HOME=/home/omar

RUN apt update -y \
    && apt install -y libgeotiff2 gdal-bin curl ffmpeg libqtgui4  libqt4-qt3support


ADD ./ossim-dist-minimal-ubuntu-.tgz /usr/local

EXPOSE 8080

USER 1001
WORKDIR $HOME

COPY run-java.sh run.sh
CMD '/bin/bash'
