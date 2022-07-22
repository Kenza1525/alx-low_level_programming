#include <stdio.h>
#include "main.h"
/**
 * main - print the executable
 * @argc: size of argv
 * @argv: array of strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s", *argv[0]);
	return (0);
}
