#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>


static int initz_module(void){ 
	printk(KERN_INFO"Hello word");
	printk(KERN_INFO"1");
	return 0;
}


static void clean_modulez(void){

	printk(KERN_INFO "Goodbye");
	printk(KERN_INFO"1");

}

module_init(initz_module);
module_exit(clean_modulez);

