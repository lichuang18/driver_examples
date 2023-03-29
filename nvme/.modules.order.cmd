cmd_/root/lc_work/nvme/modules.order := {   echo /root/lc_work/nvme/leapioNVME.ko; :; } | awk '!x[$$0]++' - > /root/lc_work/nvme/modules.order
