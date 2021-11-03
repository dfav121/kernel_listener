#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Jakub Hirsz");
MODULE_DESCRIPTION("First try,may not work");
MODULE_VERSION("0.1");
static int listener_init(void)
{
    printk(KERN_INFO "Hello World\n");
    return 0;
}

static void listener_exit(void)
{
    printk(KERN_INFO "Goodbye\n");
}

module_init(listener_init);

module_exit(listener_exit);