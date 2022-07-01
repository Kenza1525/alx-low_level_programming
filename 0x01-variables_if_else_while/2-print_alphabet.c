#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -> it will return the alphabet in lower case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	
	char alpha;

	srand(time(0));
	alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha = alpha + 1;
	}
	putchar('\n');
	return (0);
}
