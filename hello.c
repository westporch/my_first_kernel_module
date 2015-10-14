#include <linux/init.h>
#include <linux/module.h>

MODULE_LICENSE("Dual BSD/GPL");
MODULE_AUTHOR("HyunGwan Seo <westporch@gmail.com>");
MODULE_DESCRIPTION("My first kernel module");

static int hello_init(void)
{
	printk(KERN_ALERT "Hello, World!!\n");
	return 0;
}

static void hello_exit(void)
{
	printk(KERN_ALERT "Goodbye :-)\n");
}

module_init(hello_init);
module_exit(hello_exit);
