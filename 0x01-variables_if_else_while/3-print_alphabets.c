#include <stdio.h>
/**
 * main -> prints alphabets in lower and upper case
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lower;
	char upper;

	lower = 'a';
	upper = 'A';
	while (lower <= 'z')
	{
		putchar(lower);
		lower = lower + 1;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper = upper + 1;
	}
	putchar('n');
	return (0);
}
