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

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x28950ef1, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x7b7e2dd, __VMLINUX_SYMBOL_STR(ovs_gre_fill_metadata_dst) },
	{ 0x9dda6c96, __VMLINUX_SYMBOL_STR(rpl_gre_fb_xmit) },
	{ 0xe2c0765e, __VMLINUX_SYMBOL_STR(ovs_netdev_tunnel_destroy) },
	{ 0x10274b9c, __VMLINUX_SYMBOL_STR(ovs_vport_ops_unregister) },
	{ 0x532cac5, __VMLINUX_SYMBOL_STR(__ovs_vport_ops_register) },
	{ 0xa16d72c7, __VMLINUX_SYMBOL_STR(ovs_vport_free) },
	{ 0x690738d, __VMLINUX_SYMBOL_STR(rpl_rtnl_delete_link) },
	{ 0xe9396fce, __VMLINUX_SYMBOL_STR(ovs_netdev_link) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x5e164ef3, __VMLINUX_SYMBOL_STR(dev_change_flags) },
	{ 0x869876e7, __VMLINUX_SYMBOL_STR(rpl_gretap_fb_dev_create) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xdedca300, __VMLINUX_SYMBOL_STR(ovs_vport_alloc) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=openvswitch";


MODULE_INFO(srcversion, "01107F202ABA915A0749030");
MODULE_INFO(rhelversion, "7.6");
#ifdef RETPOLINE
	MODULE_INFO(retpoline, "Y");
#endif
#ifdef CONFIG_MPROFILE_KERNEL
	MODULE_INFO(mprofile, "Y");
#endif
