#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: pointer to a string
 * Return: character
 */

char *_strdup(char *str)
{
	int i, length = 0;
	char *copy;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}
	length++;
	copy = malloc(sizeof(char) * length);
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		copy[i] = str[i];
	}
	return (copy);
}
