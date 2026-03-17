#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/sched.h>
MODULE_LICENSE("GPL");
MODULE_AUTHOR(“Thenmozhi");
MODULE_DESCRIPTION("Simple Scheduler Module for Demonstration");

static int target_pid = 0; // Replace with the PID of the process you want to modify
static int __init simple_scheduler_init(void)
 {
    struct task_struct *task;
    printk(KERN_INFO "Simple Scheduler Module Loaded\n");
    printk(KERN_INFO "------------------------------\n");
for_each_process(task) {
        if (task->pid == target_pid) {
            // Adjust process priority using nice system call
            set_user_nice(task, -20);
            printk(KERN_INFO "Increased priority of process (PID: %d, Name: %s)\n", task->pid, task->comm);
        }
    }
    return 0;
}

static void __exit simple_scheduler_exit(void) {
    printk(KERN_INFO "Simple Scheduler Module Unloaded\n");
}
module_param(target_pid, int, S_IRUGO); // Allow passing target_pid as a parameter
MODULE_PARM_DESC(target_pid, "Target process ID");

module_init(simple_scheduler_init);
module_exit(simple_scheduler_exit);

