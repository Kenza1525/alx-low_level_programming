#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array using Binary search
 * @array: pointer to the first element
 * @size: size of the array
 * @value: target value to be searched
 * Return: index of the value or -1 for error
 */

int binary_search(int *array, size_t size, int value)
{
	size_t first_element = 0;
	size_t last_element = size - 1;
	size_t mid_element;
	size_t i;

	if (array == NULL)
	{
		return (-1);
	}
	while (first_element <= last_element)
	{
		mid_element = (first_element + last_element) / 2;
		printf("Searching in array: ");

		for (i = first_element; i < last_element + 1; i++)
		{
			printf("%d", array[i]);

			if (i != last_element)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}
		}
		if (array[mid_element] == value)
		{
			return (mid_element);
		}

		if (array[mid_element] < value)
		{
			first_element = mid_element + 1;
		}
		else
		{
			last_element = mid_element - 1;
		}
	}
	return (-1);
}
