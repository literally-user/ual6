# xv6
xv6 is a re-implementation of Dennis Ritchie's and Ken Thompson's Unix
Version 6 (v6).  xv6 loosely follows the structure and style of v6,
but is implemented for a modern RISC-V multiprocessor using C programming language.

# Installation
## MacOS
First, install developer tools:
```sh
$ xcode-select --install
```

Next, install Homebrew, a package manager for macOS: 
```sh
$ /usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"
```

Next, install the RISC-V compiler toolchain:
```sh
$ brew tap riscv/riscv
$ brew install riscv-tools
```

The brew formula may not link into `/usr/local`. You will need to update your shell's rc file (e.g. ~/.bashrc) to add the appropriate directory to $PATH.
```sh
PATH=$PATH:/usr/local/opt/riscv-gnu-toolchain/bin
```

Finally, install QEMU:
```sh
brew install qemu
```

## Installing on Debian
Make sure you are running either "bullseye" or "sid" then run:
```sh
sudo apt-get install git build-essential gdb-multiarch qemu-system-misc gcc-riscv64-linux-gnu binutils-riscv64-linux-gnu 
```
(The version of QEMU on "buster" is too old, so you'd have to get that separately.)

## Installing on Arch
```sh
sudo pacman -S riscv64-linux-gnu-binutils riscv64-linux-gnu-gcc riscv64-linux-gnu-gdb qemu-arch-extra
```
