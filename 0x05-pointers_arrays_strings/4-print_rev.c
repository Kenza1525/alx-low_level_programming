#include "main.h"
/**
 * print_rev - prints a string followed by a new line
 * @s: pointer that stores a string
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int i;

	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (s[i] != '\0')
	{
		_putchar(s[i--]);
	}
	_putchar('\n');
}
