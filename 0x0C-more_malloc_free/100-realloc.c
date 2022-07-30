#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory
 * @old_size: old size in bytes used in malloc
 * @new_size: new size in bytes
 *
 * Return: Null or pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *r, *p;

	p = ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	r = malloc(new_size);
	if (r == NULL)
		return (NULL);

	for (i = 0; i < old_size; i++)
		*(r + i) = *(p + i);

	free(ptr);
	return (r);
}
