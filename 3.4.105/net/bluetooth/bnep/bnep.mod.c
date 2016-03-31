#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x2bdabb65, "module_layout" },
	{ 0xc226e212, "sock_init_data" },
	{ 0xfbc74f64, "__copy_from_user" },
	{ 0xdbb20bf6, "up_read" },
	{ 0x22598b6e, "kernel_sendmsg" },
	{ 0x8e541335, "sockfd_lookup" },
	{ 0x67c2fa54, "__copy_to_user" },
	{ 0xa55270db, "sock_no_setsockopt" },
	{ 0x7ade6833, "sock_no_getsockopt" },
	{ 0x718565d5, "remove_wait_queue" },
	{ 0x46ef4847, "eth_change_mtu" },
	{ 0x2a3aa678, "_test_and_clear_bit" },
	{ 0xa3bcfc56, "sock_no_getname" },
	{ 0xf087137d, "__dynamic_pr_debug" },
	{ 0x1976aa06, "param_ops_bool" },
	{ 0xda9863dd, "bt_sock_register" },
	{ 0xc06c3839, "kthread_create_on_node" },
	{ 0xbea984a4, "sock_no_poll" },
	{ 0x7d11c268, "jiffies" },
	{ 0x343a1a8, "__list_add" },
	{ 0xdbacc67c, "down_read" },
	{ 0xb61a0c3b, "bt_err" },
	{ 0x7c640527, "bt_info" },
	{ 0x4a8506a7, "__pskb_pull_tail" },
	{ 0x3f796df4, "sock_no_mmap" },
	{ 0xffd5a395, "default_wake_function" },
	{ 0xb133d17b, "sock_no_recvmsg" },
	{ 0xfa2a45e, "__memzero" },
	{ 0xb58cadc7, "hci_get_route" },
	{ 0x5f754e5a, "memset" },
	{ 0x2b9a9f04, "netif_rx_ni" },
	{ 0x62080a6f, "sock_no_socketpair" },
	{ 0xe395d510, "sk_alloc" },
	{ 0x27e1a049, "printk" },
	{ 0x99a3f5c4, "sock_no_bind" },
	{ 0x71c90087, "memcmp" },
	{ 0xcc1fb551, "baswap" },
	{ 0x34bba81c, "free_netdev" },
	{ 0x48ae15a6, "register_netdev" },
	{ 0x7442c983, "sock_no_listen" },
	{ 0x16305289, "warn_slowpath_null" },
	{ 0xd0c3d3a0, "sock_no_accept" },
	{ 0x521445b, "list_del" },
	{ 0xb08cbe06, "sk_free" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xf19294db, "bt_sock_unregister" },
	{ 0xba6d271e, "skb_pull" },
	{ 0x79d03257, "up_write" },
	{ 0x74bd46a4, "down_write" },
	{ 0x3b6c8e53, "fput" },
	{ 0x31015095, "sock_no_shutdown" },
	{ 0xf0d8b51a, "module_put" },
	{ 0xcf611f7e, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xf678e572, "proto_register" },
	{ 0xc2066af0, "batostr" },
	{ 0x28c11791, "__alloc_skb" },
	{ 0xecccf912, "put_device" },
	{ 0x1000e51, "schedule" },
	{ 0xd6abce9, "kfree_skb" },
	{ 0x397e8501, "proto_unregister" },
	{ 0x49fc43f1, "alloc_netdev_mqs" },
	{ 0x4a974cd4, "eth_type_trans" },
	{ 0xe001cb10, "__module_put_and_exit" },
	{ 0x716c7058, "wake_up_process" },
	{ 0x3e17f6c3, "ether_setup" },
	{ 0x79f722a4, "__module_get" },
	{ 0x72542c85, "__wake_up" },
	{ 0xb324a54e, "sock_no_connect" },
	{ 0xb8ea6565, "_raw_write_unlock_bh" },
	{ 0x762ab20d, "eth_validate_addr" },
	{ 0x3fdacc6f, "add_wait_queue" },
	{ 0x9d669763, "memcpy" },
	{ 0xb7b61546, "crc32_be" },
	{ 0x510e04b4, "sock_no_sendmsg" },
	{ 0x304ad890, "set_user_nice" },
	{ 0x6d09b57e, "_raw_write_lock_bh" },
	{ 0xdf3ccd2c, "skb_dequeue" },
	{ 0x6d7d193, "unregister_netdev" },
	{ 0xefd6cf06, "__aeabi_unwind_cpp_pr0" },
	{ 0x676bbc0f, "_set_bit" },
	{ 0xc36d1833, "__netif_schedule" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x49ebacbd, "_clear_bit" },
	{ 0xe914e41e, "strcpy" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bluetooth";


MODULE_INFO(srcversion, "0601C7CB11E277ECAF61868");
