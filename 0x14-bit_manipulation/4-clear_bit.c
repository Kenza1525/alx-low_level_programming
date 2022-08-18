#include "main.h"

/**
 * clear_bit - set the falue of 0 at a given index.
 * @n: number
 * @index: index
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int size = (sizeof(*n) * 8);

	if (index > size)
		return (-1);

	*n = *n & ~(1 << index);

	return (1);
}
