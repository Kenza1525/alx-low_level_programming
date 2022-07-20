#include "main.h"
/**
 * _sqrt - check square root
 * @n: number
 * @s_root: square root
 * Return: _sqrt
 */

int _sqrt(int n, int s_root)
{
	if (s_root * s_root == n)
	{
		return (s_root);
	}
	if (s_root == n / 2)
	{
		return (-1);
	}

	return (_sqrt(n, s_root + 1));
}

/**
 * _sqrt_recursion - square root
 * @n: number
 * Return: square root of n
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}

	return (_sqrt(n, 0));
}
