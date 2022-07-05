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

	for (i = 0; i < 10; i++)
	{
		_putchar('\n');

		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
	}
	_putchar('\n');
}
