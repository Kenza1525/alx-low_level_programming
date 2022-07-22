#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of arguments passed into it
 * @argc: size of argv
 * @argv: array of strings
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
