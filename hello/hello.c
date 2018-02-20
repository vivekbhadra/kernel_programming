/**
 * Sample Kernel module.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include <linux/module.h>
MODULE_AUTHOR("Vivek Bhadra <vivek.bhadra@gmail.com>");
MODULE_DESCRIPTION("Sample Kernel module");
MODULE_LICENSE("GPL v2");

static int __init my_init(void)
{
	printk("Hello World\n");
	return 0;
}

static int __exit my_exit(void)
{
	printk("Goodbye\n");
	return 0;
}

module_init(my_init)
module_exit(my_exit)

