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
	{ 0x81951c5a, "__do_once_done" },
	{ 0x7a5fdc1b, "pci_save_state" },
	{ 0x8df02145, "pcie_aspm_enabled" },
	{ 0xb76de876, "nvme_uninit_ctrl" },
	{ 0xd43859f2, "param_ops_uint" },
	{ 0x1718b539, "dma_pool_create" },
	{ 0xfb4f9785, "nvme_complete_rq" },
	{ 0x41fd828e, "pci_request_selected_regions" },
	{ 0xb2f95451, "pci_release_selected_regions" },
	{ 0xd26016c7, "nvme_wait_freeze_timeout" },
	{ 0x22f6ed91, "pci_enable_device_mem" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x1ba59527, "__kmalloc_node" },
	{ 0x7835afa8, "blk_mq_tagset_wait_completed_request" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0xc5ce0f1d, "nvme_start_queues" },
	{ 0x63c4d61f, "__bitmap_weight" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xd45434ee, "admin_timeout" },
	{ 0x38b5eae8, "blk_mq_complete_request_remote" },
	{ 0x5eaca692, "dma_unmap_page_attrs" },
	{ 0x509c27f6, "nvme_setup_cmd" },
	{ 0x8d8aab26, "nvme_start_freeze" },
	{ 0x7e2d339e, "__pci_register_driver" },
	{ 0x8d05104d, "nvme_start_ctrl" },
	{ 0xe57beaee, "pcibios_resource_to_bus" },
	{ 0xedc03953, "iounmap" },
	{ 0x8cf1f21a, "param_set_uint" },
	{ 0xad449ad, "nvme_complete_batch_req" },
	{ 0xa5490d20, "nvme_submit_sync_cmd" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x37a0cba, "kfree" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x9b99e668, "pci_disable_pcie_error_reporting" },
	{ 0xd35a6d31, "mempool_kmalloc" },
	{ 0x64b62862, "nvme_wq" },
	{ 0x55ec7f62, "pci_irq_vector" },
	{ 0x316236af, "get_device" },
	{ 0x18defc48, "nvme_disable_ctrl" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa897e3e7, "mempool_free" },
	{ 0x9493fc86, "node_states" },
	{ 0x86bb6b5a, "pci_unregister_driver" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0xe783e261, "sysfs_emit" },
	{ 0xf85923dd, "blk_mq_alloc_tag_set" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x6a037cf1, "mempool_kfree" },
	{ 0x8c2abb89, "blk_mq_end_request_batch" },
	{ 0xf5f370e0, "async_schedule_node" },
	{ 0xf25f9dcc, "dma_map_page_attrs" },
	{ 0x29d56dbe, "blk_mq_pci_map_queues" },
	{ 0x4c1043bd, "nvme_wait_freeze" },
	{ 0x203f4c9b, "nvme_cancel_request" },
	{ 0x92997ed8, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xfee416e9, "nvme_cleanup_cmd" },
	{ 0x8644506c, "param_get_uint" },
	{ 0xda6c4045, "nvme_sync_queues" },
	{ 0xd0da656b, "__stack_chk_fail" },
	{ 0xc6f82d45, "dma_max_mapping_size" },
	{ 0x3e723b03, "put_device" },
	{ 0x991a4179, "pci_free_irq" },
	{ 0x9c122bcf, "mempool_create_node" },
	{ 0xc3762aec, "mempool_alloc" },
	{ 0xc5bfa4c, "blk_mq_free_request" },
	{ 0x30844483, "nvme_change_ctrl_state" },
	{ 0x8a6d3dd9, "kmem_cache_alloc_node_trace" },
	{ 0xd6263894, "_dev_info" },
	{ 0xc180c509, "pci_select_bars" },
	{ 0xd853adcb, "nvme_init_ctrl" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x89a542f3, "blk_get_queue" },
	{ 0x3c0c7b72, "nvme_fail_nonready_command" },
	{ 0xe4e71ba2, "_dev_err" },
	{ 0xc30b195a, "pci_request_irq" },
	{ 0x1c368a15, "pci_load_saved_state" },
	{ 0xa339faef, "blk_execute_rq_nowait" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xe891509e, "pci_device_is_present" },
	{ 0xdc6a670b, "dma_alloc_attrs" },
	{ 0xa01f2664, "pci_read_config_word" },
	{ 0x4670d00b, "acpi_storage_d3" },
	{ 0xa04c216e, "__blk_rq_map_sg" },
	{ 0xf5eb927f, "nvme_remove_namespaces" },
	{ 0xa001b382, "blk_mq_alloc_request" },
	{ 0xde80cd09, "ioremap" },
	{ 0x893f80c5, "blk_mq_free_tag_set" },
	{ 0xfbd93c73, "sysfs_create_group" },
	{ 0x51641162, "opal_unlock_from_suspend" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x813cf212, "nvme_io_timeout" },
	{ 0x52b41938, "blk_put_queue" },
	{ 0x96019b4f, "pci_restore_state" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0xa55b2065, "nvme_enable_ctrl" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xf97cf586, "nvme_try_sched_reset" },
	{ 0x217a074f, "pci_enable_pcie_error_reporting" },
	{ 0xfb578fc5, "memset" },
	{ 0x7c5e2542, "_dev_warn" },
	{ 0x33ad43af, "pci_alloc_irq_vectors_affinity" },
	{ 0x7674696d, "pci_set_master" },
	{ 0x9166fc03, "__flush_workqueue" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xeee0f39d, "blk_mq_init_queue" },
	{ 0x8a9c70ed, "nvme_sec_submit" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xcbfb33e4, "init_opal_dev" },
	{ 0xb093ae0b, "dma_set_coherent_mask" },
	{ 0x42635d55, "pm_suspend_global_flags" },
	{ 0x420045ba, "sysfs_remove_group" },
	{ 0xcde77bcc, "free_opal_dev" },
	{ 0xbadc3fb5, "blk_mq_update_nr_hw_queues" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xb5aa7165, "dma_pool_destroy" },
	{ 0x78ddb76b, "dmi_match" },
	{ 0xfb86db83, "param_set_uint_minmax" },
	{ 0x3ab8a07e, "dma_free_attrs" },
	{ 0x941756e1, "nvme_stop_admin_queue" },
	{ 0xa9ac7a5d, "nvme_kill_queues" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa04abfd2, "param_ops_bool" },
	{ 0x1c719a69, "nvme_complete_async_event" },
	{ 0x87b8798d, "sg_next" },
	{ 0xa6d9678b, "nvme_stop_queues" },
	{ 0x9034a696, "mempool_destroy" },
	{ 0x34989590, "nvme_set_queue_count" },
	{ 0x56470118, "__warn_printk" },
	{ 0xe1f5b4aa, "nvme_shutdown_ctrl" },
	{ 0x4d4d7b79, "blk_mq_map_queues" },
	{ 0x637ad62c, "nvme_start_admin_queue" },
	{ 0xa3ff2097, "nvme_set_features" },
	{ 0x8fc142cd, "blk_mq_start_request" },
	{ 0xef04611f, "blk_mq_tagset_busy_iter" },
	{ 0xcb9ce4c0, "nvme_unfreeze" },
	{ 0x350790, "pci_disable_device" },
	{ 0x88415196, "nvme_stop_ctrl" },
	{ 0x9f14b916, "dma_set_mask" },
	{ 0x603b2a7, "nvme_wait_reset" },
	{ 0x3297b7ec, "dma_unmap_sg_attrs" },
	{ 0x3c3a5b8d, "nvme_init_request" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xe702e1d8, "device_release_driver" },
	{ 0xc73c9e28, "pci_sriov_configure_simple" },
	{ 0x4fa8f1f1, "param_ops_int" },
	{ 0x7904bcaa, "nvme_init_ctrl_finish" },
	{ 0x47dec5a6, "nvme_reset_ctrl" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x48302eaa, "pci_free_irq_vectors" },
	{ 0xba884e6d, "nvme_get_features" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x71d1ee09, "__nvme_check_ready" },
	{ 0xf301d0c, "kmalloc_caches" },
	{ 0x18e60984, "__do_once_start" },
	{ 0x610825e4, "dma_map_sg_attrs" },
	{ 0x5c26a53b, "wait_for_completion_io_timeout" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x541a6db8, "module_layout" },
};

MODULE_INFO(depends, "nvme-core");

MODULE_ALIAS("pci:v00008086d00000953sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A53sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A54sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00000A55sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000F1A5sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d0000F1A6sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00008086d00005845sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B36d00000010sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000126Fd00002263sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001BB1d00000100sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C58d00000003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C58d00000023sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C5Fd00000540sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Dd0000A821sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Dd0000A822sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001987d00005012sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001987d00005016sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001B4Bd00001092sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001CC1d000033F8sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000010ECd00005762sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001CC1d00008201sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001344d00005407sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C5Cd00001504sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001C5Cd0000174Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000015B7d00002001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D97d00002263sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Dd0000A80Bsv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000144Dd0000A809sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001CC4d00006303sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001CC4d00006302sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00002646d00002262sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00002646d00002263sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001E4Bd00001001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001E4Bd00001002sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001E4Bd00001202sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001CC1d00005350sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001E49d00000041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000C0A9d0000540Asv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D0Fd00000061sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D0Fd00000065sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D0Fd00008061sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D0Fd0000CD00sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D0Fd0000CD01sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001D0Fd0000CD02sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00002001sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00002003sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v0000106Bd00002005sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v*d*sv*sd*bc01sc08i02*");

MODULE_INFO(srcversion, "26235D060DD99BB5B76F377");
