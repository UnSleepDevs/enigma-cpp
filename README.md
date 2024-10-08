# LittleEnigma

> Currently working only in UNIX-Like systems, don't expect it will
> work in windows, because it's using kernel functions

This repository contains a little implementation of Enigma Machine,
using C++ and Make for developing;

## Building
To build this project you will need installed in your system:
+ A GNU/Linux distribution
+ GCC/G++ Compiler (>=12.1.0)
+ Make (>=4.4.1)
+ Git

### Clone the sources
If you don't have git installed on your system, try next step
> Remember first add your ssh-key to github, it will provide authentication for this
private repository.
```bash
git clone git@github.com:UnSleepDevs/enigma-cpp.git
```

### Install make, git and gcc/g++
This instructions are useful if you're using
arch-like distros
```bash
sudo pacman -Sy make base-devel git
```

### Run the following commands to build
```bash
make clean # this will clear your folder
make
```

### Why it's required Unix-Like distributions?
Because I'm lazyness, but if you wanna try windows support, please use
windows.h and try avoid conio.h, but if it's really necesary don't include them
in libs.h, insthead create a file for windows deps

> More information here: **[unistd.h](https://en.wikipedia.org/wiki/Unistd.h)**
