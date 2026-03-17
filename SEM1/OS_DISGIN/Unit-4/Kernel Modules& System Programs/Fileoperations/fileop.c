#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/fs.h>

#define FILE_PATH "/tmp/simple_kernel.txt"

static int __init simple_init(void)
{
    struct file *f;
    loff_t pos = 0;
    char write_buf[] = "Kernel File Operation";
    char read_buf[30];

    f = filp_open(FILE_PATH, O_RDWR | O_CREAT, 0644);

    kernel_write(f, write_buf, sizeof(write_buf), &pos);
    printk(KERN_INFO "Written text into file\n");

    pos = 0;
    kernel_read(f, read_buf, sizeof(read_buf), &pos);

    filp_close(f, NULL);

    return 0;
}

static void __exit simple_exit(void)
{
}

module_init(simple_init);
module_exit(simple_exit);

MODULE_LICENSE("GPL");
MODULE_AUTHOR("Thenmozhi");
MODULE_DESCRIPTION("File operations Kernel Module");
