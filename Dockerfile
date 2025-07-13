FROM ubuntu:20.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y \
  build-essential \
  git \
  curl \
  python3 \
  python3-pip \
  gcc \
  gdb \
  make \
  qemu-system-misc \
  libgmp-dev \
  libmpfr-dev \
  libmpc-dev \
  texinfo \
  wget \
  unzip \
  sudo \
  software-properties-common

RUN apt-get install -y gcc-riscv64-linux-gnu g++-riscv64-linux-gnu

WORKDIR /xv6

CMD ["/bin/bash"]
