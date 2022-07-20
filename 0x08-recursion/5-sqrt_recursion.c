#include "main.h"
/**
 * _sqrt_recursion - gives the natural square root of a number
 * @n: the number
 *
 * Return: an integer
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
/**
 * _sqrt - check square root
 * @n: number
 * @s_root: square root
 * Return: an integer
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

	return (_sqrt(n, root + 1));
}
