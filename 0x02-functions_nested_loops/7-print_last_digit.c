#include "main.h"
/**
 * print_last_digit -> print last digit
 * @n: variable to be used
 *
 * Return: 0
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar((n % 10) + '0');
	return (n % 10);
}