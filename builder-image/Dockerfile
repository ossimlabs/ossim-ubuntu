FROM nexus-docker-public-group.ossim.io/ubuntu:18.04 as build
ENV OSSIM_DEV_HOME=/work \
    OSSIM_HOME=/work/ossim \
    OSSIM_BUILD_DIR=/work/build \
    OSSIM_VERSION=1.9.0 \
    OSSIM_VERSION_TAG=SNAPSHOT \
    REPOSITORY_MANAGER_URL=https://nexus.ossim.io/repository \
    OSSIM_PREFS_FILE=/usr/local/share/ossim/ossim-site-preferences \
    OSSIM_INSTALL_PREFIX=/usr/local \
    OSSIM_DATA=/data \
    PATH=/usr/local/bin:/usr/bin:$PATH \
    LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/usr/local/lib:/usr/local/lib64 \
    JAVA_HOME=/usr/lib/jvm/java-8-openjdk-amd64
RUN apt update -y \
    && apt install -y cmake git vim g++ libgeos-dev libgeotiff-dev libcurl4-openssl-dev ffmpeg libavcodec-dev \
    libavformat-dev  libavdevice-dev libgdal-dev  openjdk-11-jdk qt4-dev-tools

RUN apt update -y \
    && apt install -y nasm yasm


COPY build-scripts /build-scripts
COPY deps /deps
WORKDIR /deps
RUN /build-scripts/build-deps.sh
RUN yes | rm -r /deps/*/.git
RUN mkdir -p /work
FROM scratch
COPY --from=build / /
ENV OSSIM_DEV_HOME=/work \
    OSSIM_HOME=/work/ossim \
    OSSIM_BUILD_DIR=/work/build \
    OSSIM_VERSION=1.9.0 \
    OSSIM_VERSION_TAG=SNAPSHOT \
    REPOSITORY_MANAGER_URL=https://nexus.ossim.io/repository \
    OSSIM_PREFS_FILE=/usr/local/share/ossim/ossim-site-preferences \
    OSSIM_INSTALL_PREFIX=/usr/local \
    OSSIM_DATA=/data \
    PATH=/usr/local/bin:/usr/bin:$PATH \
    LD_LIBRARY_PATH=/usr/local/lib:/usr/local/lib64:$PATH \
    JAVA_HOME=/usr/lib/jvm/java-8-openjdk-amd64
WORKDIR /work
CMD /build-scripts/build-ossim.sh