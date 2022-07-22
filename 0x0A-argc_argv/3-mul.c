#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - return mul of 2 numbers
 * @argc: argv size
 * @argv: array of characters
 * Return: 0 or 1 in case of an error
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));

	return (0);
}
