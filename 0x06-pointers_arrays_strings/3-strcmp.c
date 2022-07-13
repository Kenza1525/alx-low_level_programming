#include"main.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer that stores a string
 * @s2: pointer that stores a string
 *
 * Return: an integer
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int diff;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
		{
			return (0);
		}
		i++;
	}
	return (diff);
}
