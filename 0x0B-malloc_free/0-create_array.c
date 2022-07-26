#include"main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initilizes it with a specific char
 * @size: integer parameter, size of the array
 * @c: character parameter, contained in the array
 *
 * Return: a character
 */
char *create_array(unsigned int size, char c)
{
	int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(size * sizeof(char));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return (p);
}


