#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: argv size
 * @argv: arry of pointers
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int product;

	product = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			product *= atoi(argv[i]);
		}
		printf("%d\n", product);
	}
	return (0);
}
