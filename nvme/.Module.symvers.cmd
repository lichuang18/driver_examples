cmd_/root/lc_work/nvme/Module.symvers := sed 's/ko$$/o/' /root/lc_work/nvme/modules.order | scripts/mod/modpost -m -a  -o /root/lc_work/nvme/Module.symvers -e -i Module.symvers   -T -
