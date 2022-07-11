#include "main.h"
/**
 * rev_string - reverses a string
 * @s: pointer that stores a character
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int index, n;
	char store[20];

	index = 0;
	n = 0;
	while (s[index] != '\0')
	{
		store[index] = s[index];
		index++;
	}
	index--;
	while (index >= 0)
	{
		s[index] = store[n];
		index--;
		n++;
	}
	s[n++] = '\0';

}
