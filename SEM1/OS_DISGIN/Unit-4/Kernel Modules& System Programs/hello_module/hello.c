#include <linux/module.h>  // Required for all kernel modules
#include <linux/kernel.h>  // Required for KERN_INFO
#include <linux/init.h>    // Required for the macros

//Metadata
MODULE_LICENSE("GPL");          // License type
MODULE_AUTHOR("Thenmozhi");     // Author
MODULE_DESCRIPTION("A simple Hello World Kernel Module");  // Description


// Module entry point
static int __init hello_init(void) {
    printk(KERN_INFO "Hello, World!\n");
    return 0;  // Return 0 means the module is loaded successfully
}

// Module exit point
static void __exit hello_exit(void) {
    printk(KERN_INFO "Goodbye, World!\n");
}

// Macros to register the entry and exit points
module_init(hello_init);
module_exit(hello_exit);



