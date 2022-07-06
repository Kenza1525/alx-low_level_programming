#include "main.h"
/**
 * print_times_table - prints the n table only if 0 < n < 15
 * @n: the variable to replace
 *
 * Return: 0
 */
void print_times_table(int n)
{
	int x;
	int y;
	int product;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				product = x * y;
				if (y == 0)
				{
					_putchar(product + '0');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
					if (product <= 9)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(product + '0');
					}
					else if (product > 9 && product < 100)
					{
						_putchar(' ');
						_putchar('0' + (product / 10));
						_putchar('0' + (product % 10));
					}
					else if (product >= 100)
					{
						_putchar('0' + (product / 100));
						_putchar('0' + ((product / 100) % 10));
						_putchar('0' + (product % 10));
					}
				}
			}
		}
	}		
}
