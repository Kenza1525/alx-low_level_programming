#include "main.h"
/**
 * _prime - num
 * @n: number
 * @c: check if is prime
 * Return: integer
 */
int _prime(int n, int c)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % c == 0)
	{
		return (0);
	}
	if (c == n / 2)
	{
		return (1);
	}

	return (_prime(n, c + 1));
}
/**
 * is_prime_number - check if a num is prime
 * @n: number
 * Return: an integer
 */

int is_prime_number(int n)
{
	return (_prime(n, 2));
}
