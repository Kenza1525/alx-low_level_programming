#include "main.h"

/**
 * print_alphabet_x10 -> prints alphabet in lower case 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int i;
	char c = 'a';

	while (i < 10)
	{

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
