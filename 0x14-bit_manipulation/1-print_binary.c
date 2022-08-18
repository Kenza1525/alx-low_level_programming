#include "main.h"

/**
 * binary_rep - recursion function to print bit 0 (acts as a mask)
 * @n: type const unsigned long int
 */

void binary_rep(unsigned long int n)
{
	if (n == 0)
		return;
	binary_rep(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * print_binary - prints the binary representation of a number
 * @n: type const unsigned long int
 * Return: binary number
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		binary_rep(n);
}
