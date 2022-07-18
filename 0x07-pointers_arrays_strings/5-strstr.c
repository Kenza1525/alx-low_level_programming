#include"main.h"
/**
 * _strstr - locates a substring
 * @haystack: pointer to a string
 * @needle: pointer to a substring
 *
 * Return: character or a string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k = 0, nlen = 0;

	while (needle[k] != '\0')
	{
		k++;
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (nlen == k)
			{
				return (&haystack[i - 1]);
			}

			if (needle[j] == haystack[i + j])
			{
				nlen++;
			}
			else
			{
				nlen = 0;
			}
		}
	}
	return ("\0");
}
