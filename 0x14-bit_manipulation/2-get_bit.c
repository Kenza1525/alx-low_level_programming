#include "main.h"

/**
 * get_bit - get the bit at a given index
 * @n: number
 * @index: index
 * Return: the bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int num = (n >> index) & 1;
	unsigned long int size = (sizeof(n) * 8);

	if (index > size)
		return (-1);

	if (n > 0)
		return (num);

	return (-1);
}
