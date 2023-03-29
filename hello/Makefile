ifneq ($(KERNELRELEASE),)
        obj-m := hello.o
        #hello-objs := hello.o
else
        #KDIR :=/lib/moduels/5.10.0lichuang-test1/build
        KDIR :=/lib/modules/5.19.0-35-generic/build
endif
#/lib/modules/4.19.90-25.0.v2111.ky10.sw_64
all:
	make -C $(KDIR)  M=$(PWD) modules
clean:
	make -C $(KDIR)  M=$(PWD) modules clean
