packages = 0
with open("download.sh","w") as out:
    out.write("#!/bin/bash\n")
    out.write("mkdir -p sources\n")
    out.write("rootMount=$1\n")
    out.write("swapMount=$2\n")
    out.write("LFS=/mnt/lfs\n")
    out.write("echo Mounting Partitions\n")
    out.write("mkdir -pv $LFS > /dev/stderr\n")
    out.write("mount -v -t ext4 $rootMount $LFS > /dev/stderr\n")
    out.write("/sbin/swapon -v $swapMount > /dev/stderr\n")
    with open("wget-list","r") as inp:
        data = inp.readlines()
        for line in data:
            packages+=1
            out.write("wget "+line.replace("\n","")+" --continue --directory-prefix=$LFS/sources\n")
            out.write("echo \"TARS Completed\"\n")
print("Completed {} packages".format(packages))