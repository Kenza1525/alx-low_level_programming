#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: argv size
 * @argv: arry of pointers
 *
 * Return: 0 or 1 in case of an erroet
 */
int main(int argc, char *argv[])
{
	int i;
	int product;

	product = atoi(argv[1] * argv[2];
	if (argc != 3)
	{
		printf("Error\n");
		return (1);

	}
	else
	{
		printf("%d\n", product);
	}
	return (0);
}
