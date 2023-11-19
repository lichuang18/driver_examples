# # SPDX-License-Identifier: GPL-2.0
# obj-$(CONFIG_MEGARAID_MM)			+= megaraid_mm.o
# obj-$(CONFIG_MEGARAID_MAILBOX)	+= megaraid_mbox.o
# obj-$(CONFIG_MEGARAID_SAS)		+= megaraid_sas.o
# megaraid_sas-objs := megaraid_sas_base.o megaraid_sas_fusion.o \
# 	megaraid_sas_fp.o megaraid_sas_debugfs.o

# leapiosas makefile
ifneq  ($(KERNELRELEASE),)
	obj-m += leapraid.o
	leapraid-objs := megaraid_sas_base.o megaraid_sas_fusion.o \
		megaraid_sas_fp.o megaraid_sas_debugfs.o
### megaraid_mbox.o megaraid_mm.o
else
	KERNEL_DIR = /lib/modules/$(shell uname -r)/build
endif

all:
	$(MAKE) -C $(KERNEL_DIR) M=$(PWD) modules

init:
	sudo rmmod megaraid_sas

install:
#	sudo rmmod leapraid
	sudo insmod leapraid.ko

uninstall:
	sudo rmmod leapraid

.PHONY:clean
clean:
	$(MAKE) -C $(KERNEL_DIR) M=$(PWD) clean
megaraid_sas-objs := megaraid_sas_base.o megaraid_sas_fusion.o \
	megaraid_sas_fp.o megaraid_sas_debugfs.o
