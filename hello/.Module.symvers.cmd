cmd_/root/lc_work/Module.symvers := sed 's/ko$$/o/' /root/lc_work/modules.order | scripts/mod/modpost -m -a  -o /root/lc_work/Module.symvers -e -i Module.symvers   -T -
