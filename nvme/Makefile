# SPDX-License-Identifier: GPL-2.0-only
# 内核中编译目前只需要host
#obj-y		+= host/
# obj-y		+= target/

ifneq  ($(KERNELRELEASE),)
	obj-m += leapioNVME.o
	leapioNVME-objs := host/pci.o
else
	KERNEL_DIR = /lib/modules/$(shell uname -r)/build
# KERNEL_DIR = /home/hwj/workspace/devlinux
endif

all:
	$(MAKE) -C $(KERNEL_DIR) M=$(PWD) modules

.PHONY:install
install:
	sudo insmod leapioNVME.ko

.PHONY:uninstall
uninstall:
	sudo rmmod leapioNVME

.PHONY:ddtest
ddtest:
	sudo dd if=/dev/nvme0n1 of=/dev/zero bs=1M count=10240

.PHONY:clean
clean:
	$(MAKE) -C $(KERNEL_DIR) M=$(PWD) clean