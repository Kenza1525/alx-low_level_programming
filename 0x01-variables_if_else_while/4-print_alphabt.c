#include <stdio.h>
/**
 * main -> prints alphabet in lower case and skip q and e
 *
 * Return: always 0
 */
int main(void)
{
	char lower = 'a';

	while (lower <= 'z')
	{
		if ((lower != 'q') && (lower != 'e'))
			putchar(lower);
			lower++;
	}
	putchar('\n');
	return (0);
}
