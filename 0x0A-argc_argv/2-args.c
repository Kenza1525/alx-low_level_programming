#include "main.h"
#include <stdio.h>
/**
 * main - print the number of arguments
 * @argc: argv size
 * @argv: array of pointers
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
