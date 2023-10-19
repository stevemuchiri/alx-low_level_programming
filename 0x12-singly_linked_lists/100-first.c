#include <stdio.h>

void __attribute__((constructor)) wolf(void);

/**
 *  wolf - Prints a string before execution of the  main.
 */

void wolf(void)
{
	printf("You're beat! and yet, you must allow,\n"
	       "I bore my house upon my back!\n");
}
