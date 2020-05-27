#FROM alpine:latest
#1
FROM nexus-docker-public-group.ossim.io/ubuntu:latest as build
#2
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

#3
RUN apt-get update -y\

    && DEBIAN_FRONTEND="noninteractive" apt-get -y install tzdata \
#    && apt install -y epel-release deltarpm \
#                   https://download.postgresql.org/pub/repos/yum/reporpms/EL-7-x86_64/pgdg-redhat-repo-latest.noarch.rpm \
    && apt-get install -y \
                wget git build-essential make autoconf automake libtool nasm yasm libgnutls28-dev \
                libass-dev libbluray-dev libmodplug-dev lame libopenjp2-7-dev librsvg2-dev libsoxr-dev libspeex-dev \
                libtheora-dev libvorbis-dev xz-utils libsdl2-dev openjdk-8-jdk libmp3lame-dev \
                libturbojpeg-dev libcurl4-openssl-dev curl cmake unzip zip ant swig3.0 ffmpeg lzma liblzma-dev \
                libgeos-dev geotiff-bin \
                python3.7 libgdal-dev python3-gdal gdal-bin 
#               which geotiff15-dev geos38-dev gdal30-dev
    # && apt-get upgrade -y


#4
RUN curl -s "https://get.sdkman.io" | bash \
    && bash -c "source $HOME/.sdkman/bin/sdkman-init.sh && \
        yes | sdk install groovy 2.4.17 && \
        yes | sdk install grails 4.0.1 && \
        yes | sdk install gradle 6.0 && \
        yes | sdk install maven 3.6.3 && \
        rm -rf $HOME/.sdkman/archives/* && \
        rm -rf $HOME/.sdkman/tmp/*" \
#    && adduser -D -s /bin/bash omar \
#    && chown -R omar:omar /usr/local \
    && rm -rf /var/cache/apt/*

#5
RUN ln -s /root/.sdkman/candidates/gradle/current/bin/gradle /usr/bin/gradle && \
    ln -s /root/.sdkman/candidates/grails/current/bin/grails /usr/bin/grails && \
    ln -s /root/.sdkman/candidates/groovy/current/bin/groovy /usr/bin/groovy && \
    ln -s /root/.sdkman/candidates/maven/current/bin/mvn /usr/bin/mvn

#6
COPY build-scripts /build-scripts
#7
COPY deps /deps
#8
WORKDIR /deps

#9
RUN /build-scripts/build-deps.sh

#10
RUN yes | rm -r /deps/*/.git

# USER omar
# WORKDIR /home/omar
#11
RUN mkdir -p /work

#12
FROM scratch
#13
COPY --from=build / /

#14
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

#15
WORKDIR /work
#16
CMD /build-scripts/build-ossim.sh
