FROM nexus-docker-public-group.ossim.io/ubuntu:latest as build

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

RUN echo "deb http://archive.ubuntu.com/ubuntu/ eoan universe" >> /etc/apt/sources.list
RUN apt-get update -y\

    && DEBIAN_FRONTEND="noninteractive" apt-get -y install tzdata \
    && apt-get install -y \
                wget git build-essential make autoconf automake libtool nasm yasm libgnutls28-dev \
                libass-dev libbluray-dev libmodplug-dev lame libopenjp2-7-dev librsvg2-dev libsoxr-dev libspeex-dev \
                libtheora-dev libvorbis-dev xz-utils libsdl2-dev openjdk-8-jdk libmp3lame-dev \
                libturbojpeg-dev libcurl4-openssl-dev curl cmake unzip zip ant swig4.0 ffmpeg lzma liblzma-dev \
                libgeos-dev geotiff-bin \
                python3.7 libgdal-dev python3-gdal gdal-bin qt4-dev-tools

RUN apt-get install qt5-default -y

RUN ln -s /usr/bin/swig4.0 /usr/bin/swig && \
    curl -s "https://get.sdkman.io" | bash \
    && bash -c "source $HOME/.sdkman/bin/sdkman-init.sh && \
        yes | sdk install groovy 2.4.17 && \
        yes | sdk install grails 4.0.1 && \
        yes | sdk install gradle 6.0 && \
        yes | sdk install maven 3.6.3 && \
        rm -rf $HOME/.sdkman/archives/* && \
        rm -rf $HOME/.sdkman/tmp/*" \
    && rm -rf /var/cache/apt/*

RUN ln -s /root/.sdkman/candidates/gradle/current/bin/gradle /usr/bin/gradle && \
    ln -s /root/.sdkman/candidates/grails/current/bin/grails /usr/bin/grails && \
    ln -s /root/.sdkman/candidates/groovy/current/bin/groovy /usr/bin/groovy && \
    ln -s /root/.sdkman/candidates/maven/current/bin/mvn /usr/bin/mvn

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
