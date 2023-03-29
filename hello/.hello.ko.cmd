cmd_/root/lc_work/hello.ko := ld -r -m elf_x86_64 -z noexecstack --build-id=sha1  -T scripts/module.lds -o /root/lc_work/hello.ko /root/lc_work/hello.o /root/lc_work/hello.mod.o;  true
