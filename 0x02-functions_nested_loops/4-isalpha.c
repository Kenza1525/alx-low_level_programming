#include "main.h"
/**
 * _isalpha -> checks for alphabetic character
 * @c: The character to print
 *
 * Return: 1 if c is a letter, lower or upper case, and 0 otherwise
 */

int _isalpha(int c)
{
	char low;
	char up;
	int check = 0;

	for (low = 'a'; low <= 'z'; low++)
	{
		for (up = 'A'; low <= 'Z'; up++)
		{
			if (c == low || c == up)
				check = 1;
		}
	}
	return (check);
}
