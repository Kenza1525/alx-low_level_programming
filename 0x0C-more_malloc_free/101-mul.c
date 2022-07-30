#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiply 2 nums
 * @argv: array
 * @argc: argv length
 * Return: 0
 */

int main(int argc, char **argv)
{
	unsigned long int mul = 1;

	if (argc != 3)
	{
		printf("Error");
		exit (98);
	}

	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%lli\n", mul);

	return (0);
}
