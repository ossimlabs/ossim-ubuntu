FROM nexus-docker-public-group.ossim.io/ubuntu:latest

ENV SPRING_CLOUD_CONFIG_ENABLED=false \
    SPRING_CLOUD_DISCOVERY_ENABLED=false \
    OSSIM_DATA=/data \
    OSSIM_INSTALL_PREFIX=/usr/local \
    OSSIM_PREFS_FILE=/usr/local/share/ossim/ossim-preferences-template \
    LD_LIBRARY_PATH=/usr/local/lib64:/usr/local/lib:/usr/local/lib/x86_64-linux-gnu:$LD_LIBRARY_PATH \
    PATH=/usr/local/bin:$PATH \
    HOME=/home/omar 

RUN apt-get update -y && \
    apt-get upgrade -y && \
    apt-get install libtiff-dev libjpeg-dev libpng-dev sqlite3 libstdc++6 curl ffmpeg unzip zip bash openjdk-8-jdk -y && \
    apt-get clean && \
    adduser --disabled-password --home $HOME --shell /sbin/nologin --uid 1001 omar && \
    chown 1001:0 -R $HOME

ADD ./ossim-dist-minimal-ubuntu.tgz /usr/local
    
EXPOSE 8080

USER 1001
WORKDIR $HOME

COPY run-java.sh run.sh
CMD '/bin/bash'
