cmd_/root/lc_work/nvme/leapioNVME.mod := printf '%s\n'   host/pci.o | awk '!x[$$0]++ { print("/root/lc_work/nvme/"$$0) }' > /root/lc_work/nvme/leapioNVME.mod
