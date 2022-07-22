#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the sum
 * @argc: argv size
 * @argv: array 
 * Return: 1 or 0
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
			sum += atoi(argv[i]);
	}

	if (argc < 2)
	{
		printf("0\n");
	}
	else
	{
		printf("%i\n", sum);
	}
	return (0);
}
