#include <stdio.h>
/**
 * main -> prints all possible of two digits number from 0-99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1 = 0;
	int digit2 = 0;

	while (digit1 <= 98)
	{
		while (digit2 <= 99)
		{
			if (digit1 < digit2)
			{
				putchar((digit1 / 10) + '0');
				putchar((digit1 % 10) + '0');
				putchar(' ');
				putchar((digit2 / 10) + '0');
				putchar((digit2 % 10) + '0');

				if (digit1 != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			digit2++;
		}
		digit1++;

	}
	putchar('\n');
	return (0);
}
