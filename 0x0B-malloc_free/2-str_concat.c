#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: pointer to a string
 * @s2: pointer to a string
 *
 * Return: a string on succes and NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int size1, size2, i;
	char *conc;

	i = 0;
	size1 = 0;
	size2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		size1++;
	while (s2[i] != '\0')
		size2++;
	size2++;

	conc = malloc((size1 + size2) * sizeof(char));
	if (conc == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		conc[i] = s1[i];
	for (i = size1; i < (size1 + size2); i++)
		*(conc + i) = *(s2 + i - size2);

	return (conc);
}
