FROM ubuntu:20.04

WORKDIR /work

ENV OSSIM_INSTALL_PREFIX=/usr/local \
    OSSIM_DATA=/data \
    OSSIM_PREFS_FILE=/data/ossim-preferences-template \
    LD_LIBRARY_PATH=/usr/local/lib64:/usr/local/lib \
    JAVA_HOME=/usr/lib/jvm/java-11-openjdk-amd64 \
    REPOSITORY_MANAGER_URL=https://repo.osgeo.org/repository/release \
    OSSIM_DEV_HOME=/work \
    OSSIM_HOME=/work/ossim \
    OSSIM_VERSION=1.9.0 \
    OSSIM_VERSION_TAG=SNAPSHOT \
    GROOVY_HOME=/work/groovy-3.0.13 \    
    KAKADU_VERSION=vs8_3-02003C

# COPY ./build-kakadu.sh ./build-ossim.sh ./build-joms.sh ./apache-groovy-binary-3.0.13.zip /work/
# COPY ./ossim/ /work/ossim/
# COPY ./ossim-oms/ /work/ossim-oms/
# COPY ./ossim-plugins/ /work/ossim-plugins/
# COPY ./ossim-video/ /work/ossim-video/
# COPY ./ossim-private/ /work/ossim-private/

RUN echo "" \
    && useradd --uid 1001 --shell /usr/bin/bash omar \
    && chown -R omar:omar /usr/local \
    && apt-get update -y \
    && DEBIAN_FRONTEND="noninteractive" apt-get install -y \
        git cmake make g++ bash libgdal-dev gdal-bin gdal-data python3-gdal libgdal-java  libgeos++-dev  openjdk-11-jdk \
	    libavcodec-dev libavdevice-dev libavfilter-dev libavformat-dev libavresample-dev libavutil-dev libpostproc-dev libswresample-dev libswscale-dev \
	    swig ant maven vim \
    && echo ""

# USER omar
# WORKDIR /home/omar

CMD bash
