#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
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
	{ 0xce67f0de, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x7986ac06, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x9e548906, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0xcfa87a29, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0x4b83a80f, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x7546448f, __VMLINUX_SYMBOL_STR(tty_port_destroy) },
	{ 0x173c7d63, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0xd9948b65, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0x3f151bed, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0xb674fb3f, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0xbc25ddba, __VMLINUX_SYMBOL_STR(tty_unregister_device) },
	{ 0x6d0aba34, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x73f84837, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf16ea7d2, __VMLINUX_SYMBOL_STR(tty_port_register_device) },
	{ 0x95562a7b, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x9a2f439c, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x48b65efa, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf08b545, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa202a8e5, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x46d5b1a7, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x8af08e8a, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x76d65595, __VMLINUX_SYMBOL_STR(tty_port_tty_set) },
	{ 0xdfb78c98, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x50e4f32d, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x952664c5, __VMLINUX_SYMBOL_STR(do_exit) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x7d3cb6bb, __VMLINUX_SYMBOL_STR(tty_buffer_request_room) },
	{ 0xe3d45d73, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0xd85105f, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0xb6c04be8, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x9589c982, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x20903b29, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x786fa262, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v1234p0101d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5AB993BD6815A26E338AACA");
