# ossim-fpga image
# Provides build instructions for creating ossim applications container.
#
# How to use:
#   docker build --rm -t ossim-run-context .

FROM ossim-build-context:latest

USER root

ENV OSSIM_DEV_HOME=/home/ossim
ENV OSSIM_INSTALL_PREFIX=/usr
ENV OSSIM_DATA=/data
ENV OSSIM_PREFS_FILE=/usr/share/ossim/ossim.config
ENV LD_LIBRARY_PATH=/usr/lib:/usr/lib64:/usr/local/lib:/usr/local/lib64

# Copy needed data files:
COPY ossim.config /usr/share/ossim/ossim.config
COPY geoids /data/elevation/geoids
COPY level0 /data/elevation/dted/level0

# Copy select items from ossim installation:
COPY install/include /usr/include
#COPY install/lib /usr/lib
COPY install/lib64 /usr/lib64
COPY install/share/ossim /usr/share/ossim
COPY install/bin/imagelinker /usr/bin/imagelinker
COPY install/bin/iview /usr/bin/iview
COPY install/bin/ossim-chipper /usr/bin/ossim-chipper
COPY install/bin/ossim-info /usr/bin/ossim-info
COPY install/bin/ossim-cli /usr/bin/ossim-cli

# Copy source code for building/debugging in container:
COPY ossim /home/ossim/ossim
COPY ossim-deepcore /home/ossim/ossim-deepcore
COPY ossim-plugins /home/ossim/ossim-plugins

