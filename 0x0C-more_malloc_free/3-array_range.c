#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: integer parameter
 * @max: integer parameter
 *
 * Return: Range or NULL
 */
int *array_range(int min, int max)
{
	int *r;
	int i, l;

	if (min > max)
		return (NULL);

	l = max - min + 1;
	r = malloc(sizeof(int) * l);

	if (r == NULL)
		return (NULL);

	for (i = 0; i < l; i++, min++)
	{
		r[i] = min;
	}
	return (r);
}
