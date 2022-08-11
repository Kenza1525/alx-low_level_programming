#include "stdio.h.h"
/**
 * print_str - free memory of all list.
 * void: pointer to head in fucntion
 * Return: Always success.
 */
void print_str(void) __attribute__ ((constructor));

void print_str(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
