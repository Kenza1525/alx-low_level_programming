#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main -> assign a random number to the variable neach time it is executed
 * and print out the last digit of the number stored in n
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int a = n % 10;

	if (a > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, a);
	}
	else if (a == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, a);
	}
	else
	{
		if ((a < 6) && (a != 0))
		{
			printf("Last digit of %d is %d and is less than 6 and not o\n", n, a);
		}
		else
		{
			printf("stop\n");
		}
	}
	return (0);
}
