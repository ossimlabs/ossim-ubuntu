FROM ossim-builder-ubuntu:latest as builder
#FROM nexus-docker-public-hosted.ossim.io/omar-micro-base:latest as builder
FROM nexus-docker-public-group.ossim.io/ubuntu:18.04


WORKDIR /work

ENV OSSIM_INSTALL_PREFIX=/usr/local \
    OSSIM_DATA=/data \
    OSSIM_PREFS_FILE=/usr/local/share/ossim/ossim-preferences-template \
    LD_LIBRARY_PATH=/usr/local/lib64:/usr/local/lib \
    JAVA_HOME=/usr/lib/jvm/java-11-openjdk-amd64 \
    # GROOVY_HOME=/work/groovy-3.0.4 \
    OSSIM_VERSION=1.9.0 \
    OSSIM_VERSION_TAG=RELEASE

RUN apt update -y \
    && apt install -y libgeotiff2 gdal-bin curl ffmpeg libqtgui4  libqt4-qt3support \
    && echo ""


ADD ./ossim-dist-minimal-ubuntu-.tgz /usr/local

COPY --from=builder /usr/local /usr/local

CMD bash
