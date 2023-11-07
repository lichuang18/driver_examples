#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif


static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x56b55dfa, "scsi_dma_map" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xd2c49a39, "pcie_capability_read_word" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0xc2e587d1, "reset_devices" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x52c615f2, "pci_cfg_access_unlock" },
	{ 0x3f33eb6a, "dma_pool_create" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x47586eaf, "pci_request_selected_regions" },
	{ 0x3214020e, "pci_release_selected_regions" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xc60d0620, "__num_online_cpus" },
	{ 0x9b379870, "pci_enable_device_mem" },
	{ 0x18638604, "pci_alloc_irq_vectors" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0xac9a3c9c, "driver_remove_file" },
	{ 0xc2e656dd, "scsi_remove_host" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xa0ca3738, "kill_fasync" },
	{ 0x96848186, "scnprintf" },
	{ 0x35b7289, "__pci_register_driver" },
	{ 0xcf2a6966, "up" },
	{ 0xedc03953, "iounmap" },
	{ 0x69acdf38, "memcpy" },
	{ 0x1a05eede, "scsi_dma_unmap" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0xc7f2fe14, "pcpu_hot" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x874bbf8d, "pci_irq_vector" },
	{ 0x7cba2447, "__scsi_iterate_devices" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x43c82077, "__dynamic_dev_dbg" },
	{ 0xd7d280ad, "irq_poll_complete" },
	{ 0x5d8b5b72, "pci_unregister_driver" },
	{ 0xc62fbdb7, "pci_cfg_access_lock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x5921a19f, "pci_read_config_dword" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x792ff6e9, "blk_mq_pci_map_queues" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x122c3a7e, "_printk" },
	{ 0x6a135d90, "scsi_device_lookup" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0xa19b956, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0xde455e04, "driver_create_file" },
	{ 0xfd7afb36, "blk_queue_flag_set" },
	{ 0x60cce46c, "scsi_add_device" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x5eec1563, "_dev_info" },
	{ 0xc6cbbc89, "capable" },
	{ 0x3930d519, "pci_select_bars" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xc5c80bab, "scsi_device_put" },
	{ 0x23a17703, "pci_find_capability" },
	{ 0xea3c74e, "tasklet_kill" },
	{ 0xe523ad75, "synchronize_irq" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x199c4833, "__irq_apply_affinity_hint" },
	{ 0x5f0caf0d, "_dev_err" },
	{ 0xec34f6a1, "blk_queue_update_dma_alignment" },
	{ 0x8d51f2bc, "scsi_host_put" },
	{ 0x8c8569cb, "kstrtoint" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x24d273d1, "add_timer" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2364c85a, "tasklet_init" },
	{ 0x20aaf694, "noop_llseek" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2980cfc, "sdev_prefix_printk" },
	{ 0xe3589312, "dma_alloc_attrs" },
	{ 0xbbbf1d7, "scsi_scan_host" },
	{ 0xc3f7c36d, "debugfs_remove" },
	{ 0x174de1a6, "pci_read_config_word" },
	{ 0x42edd034, "fasync_helper" },
	{ 0x9d2ab8ac, "__tasklet_schedule" },
	{ 0xde80cd09, "ioremap" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xfb578fc5, "memset" },
	{ 0x46032efe, "_dev_warn" },
	{ 0xcd377659, "pci_alloc_irq_vectors_affinity" },
	{ 0xa5083a26, "pci_set_master" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x92034729, "blk_mq_unique_tag" },
	{ 0x756dc0d8, "scsi_host_busy" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x7f7f7bb4, "irq_poll_disable" },
	{ 0xe716aaca, "dma_set_coherent_mask" },
	{ 0x854ee1ec, "scsi_print_command" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xe8fc208e, "blk_queue_virt_boundary" },
	{ 0x701a8d08, "_dev_notice" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x87909396, "debugfs_create_file" },
	{ 0xdb435cf9, "dma_free_attrs" },
	{ 0x999e8297, "vfree" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x1204d665, "scmd_printk" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x25f7aec2, "__register_chrdev" },
	{ 0x6729d3df, "__get_user_4" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x554ae3a4, "irq_poll_sched" },
	{ 0xb2fa093e, "blk_mq_map_queues" },
	{ 0xb633f115, "irq_poll_enable" },
	{ 0x2aca3546, "pci_disable_device" },
	{ 0xd1ffb302, "scsi_done" },
	{ 0x1d86c193, "dma_set_mask" },
	{ 0xab3697e4, "irq_poll_init" },
	{ 0xd07ae855, "kmalloc_trace" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xeee3dc, "pci_irq_get_affinity" },
	{ 0x25dab7a5, "scsi_remove_device" },
	{ 0x9ab096a3, "blk_queue_max_hw_sectors" },
	{ 0xe59fb266, "scsi_add_host_with_dma" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0x30bfc2c, "param_ops_int" },
	{ 0x147d6891, "_dev_printk" },
	{ 0x43b75bbb, "scsi_host_alloc" },
	{ 0xd746cff9, "debugfs_create_dir" },
	{ 0x6a78753d, "pci_write_config_word" },
	{ 0x5fa77ea7, "pci_free_irq_vectors" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb98003bd, "scsi_change_queue_depth" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0xf9a482f9, "msleep" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xaedcd72, "blk_queue_rq_timeout" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0x3f099e0d, "pci_write_config_dword" },
	{ 0x86892d74, "kmalloc_caches" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x453e7dc, "module_layout" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("pci:v00001000d00000411sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000060sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000007Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000078sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000079sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000073sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000071sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000413sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001028d00000015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000005Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000002Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000005Dsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000005Fsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000CEsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000000CFsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000052sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000053sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000014sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000015sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d00000017sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000001Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d0000001Csv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E1sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E2sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E0sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E3sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E4sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001000d000010E7sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "A080E7FF92A7D5D65BC356A");
