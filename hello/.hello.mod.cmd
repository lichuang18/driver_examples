cmd_/root/lc_work/hello.mod := printf '%s\n'   hello.o | awk '!x[$$0]++ { print("/root/lc_work/"$$0) }' > /root/lc_work/hello.mod
