#include "main.h"
/**
 * print_times_table - prints the n times table when n is 0 < n < 15
 * @n: integer argument
 *
 * Return: 0
 */
void print_times_table(int n)
{
	int x, y, product;

	if (!(n >= 0 || n <= 15))
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				product = (x * y);
				if (y != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				else if (product < 10 && y != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (product % 10));
				}
				else if (product >= 10 && product < 100)
				{
					_putchar(' ');
					_putchar('0' + (product / 10));
					_putchar('0' + (product % 10));
				}
				else if (product >= 100 && y != 0)
				{
					_putchar('0' + (product / 100));
					_putchar('0' + (product / 10) % 10);
					_putchar('0' + (product % 10));
				}
				else
				{
					_putchar('0' + (product % 10));
				}
				_putchar('\n');
			}
		}
	}
}
