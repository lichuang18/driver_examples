cmd_/root/lc_work/modules.order := {   echo /root/lc_work/hello.ko; :; } | awk '!x[$$0]++' - > /root/lc_work/modules.order
