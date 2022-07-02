#include <stdio.h>
/**
 * main -> prints all possible of two digits number from 0-99
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit1;
	int digit2;

	for (digit1 = 0; digit1 < 98; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 <= 99; digit2++)
		{
			putchar((digit1 / 10) + '0');
			putchar((digit1 % 10) + '0');
			putchar(' ');
			putchar((digit2 / 10) + '0');
			putchar((digit2 % 10) + '0');
			if ((digit1 == 98) && (digit2 == 99))
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
