#!/bin/bash
LFS=/mnt/lfs
chmod -v a+wt $LFS/sources > /dev/stderr

## Chapter 4
echo "Installing Phase 1"
mkdir -pv $LFS/{etc,var} $LFS/usr/{bin,lib,sbin} > /dev/stderr
for i in bin lib sbin; do
ln -sv usr/$i $LFS/$i > /dev/stderr
done
case $(uname -m) in
x86_64) mkdir -pv $LFS/lib64 > /dev/stderr ;;
esac
mkdir -pv $LFS/tools > /dev/stderr
groupadd lfs > /dev/stderr
useradd -s /bin/bash -g lfs -m -k /dev/null lfs > /dev/stderr
echo "Pass\nPass\nPass" | passwd lfs
chown -v lfs $LFS/{usr{,/*},lib,var,etc,bin,sbin,tools} > /dev/stderr
case $(uname -m) in
x86_64) chown -v lfs $LFS/lib64 > /dev/stderr ;;
esac
chown -v lfs $LFS/sources > /dev/stderr

echo "Installing Phase 2"
sudo -u lfs bash -c '
echo $USER
set +h
umask 022 
LFS=/mnt/lfs 
LC_ALL=POSIX 
LFS_TGT=$(uname -m)-lfs-linux-gnu 
PATH=/usr/bin 
if [ ! -L /bin ]; then PATH=/bin:$PATH; fi
PATH=$LFS/tools/bin:$PATH 
CONFIG_SITE=$LFS/usr/share/config.site 
export LFS LC_ALL LFS_TGT PATH CONFIG_SITE 
echo Installing Phase 3
cd $LFS/sources
tar -xvf binutils-2.37.tar.xz
cd binutils-2.37
mkdir build
cd build
../configure --prefix=$LFS/tools --with-sysroot=$LFS --target=$LFS_TGT --disable-nls --disable-werror
make
make install -j1
cd ../..
yes | rm -r binutils-2.37
'v/stderr
cd ../..
yes | rm -r binutils-2.37
'ls-2.37
mkdir build
cd build
../configure --prefix=$LFS/tools --with-sysroot=$LFS --target=$LFS_TGT --disable-nls --disable-werror > /dev/stderr
make > /dev/stderr
make install -j1 > /dev/stderr
cd ../..
yes | rm -r binutils-2.37
'