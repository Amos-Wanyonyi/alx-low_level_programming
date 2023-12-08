#include <stdio.h>
void first(void) __attribute__((constructor));
/**
 * first - prints a function before it's main fucntion
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
