#!/bin/bash

export ARCH=arm
export CROSS_COMPILE=/home/joaquinscala/arm-eabi-4.8/bin/arm-eabi-
mkdir output

make clean && make mrproper
make -C $(pwd) O=output VARIANT_DEFCONFIG=msm8916_sec_a5_eur_defconfig msm8916_sec_defconfig SELINUX_DEFCONFIG=selinux_defconfig
make -C $(pwd) O=output

cp output/arch/arm/boot/Image $(pwd)/arch/arm/boot/zImage
 
rm -rf joaquin_modules
mkdir -p joaquin_modules
make modules_install INSTALL_MOD_PATH=joaquin_modules INSTALL_MOD_STRIP=1


