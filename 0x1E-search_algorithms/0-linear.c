#include "search_algos.h"

/**
 * linear_search - searches for an integer using linear search
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: target value to be searched
 * Return: target value or -1
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
