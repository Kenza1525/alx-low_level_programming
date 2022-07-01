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
	printf("Last digit of %d is ", n);
	if (n > 5)
	{
		printf("greater than 5\n");
	}
	else if (n == 0)
	{
		printf("0\n");
	}
	else
	{
		if ((n < 6) && (n != 0))
		{
			printf("less than 6 and not 0\n");
		}
		else
		{
			printf("stop\n");
		}
	}
	return (0);
}
