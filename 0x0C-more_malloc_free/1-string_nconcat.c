#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: pointer to  string 1
 * @s2: pointer to string 2
 * @n: size
 *
 * Return: Null if it fails, concatenated string on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, i, size_check;
	char *conc;

	i = 0;
	size1 = 0;
	size2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + size1))
		size1++;
	while (*(s2 + size2))
		size2++;

	if (n >= size2)
		size_check = size2;
	else
		size_check = n;

	conc = malloc((size1 + size_check + 1) * sizeof(char));
	if (conc == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		*(conc + i) = *(s1 + i);
	for (i = size1; i < (size1 + size_check); i++)
		*(conc + i) = *(s2 + i - size1);
	*(conc + i) = '\0';

	return (conc);
}
