#include <stdio.h>
#include <main.h>
/**
 * main - prints the biggest prime factor of a number.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int digit;

	digit = 612852475143;

	if (isPrime(digit) == 1)
	{
		printf("%ld\n", digit);
	}
	else
	{
		printf("%ld\n", biggestFactor(digit));
	}
	return (0);
}

int isPrime(long int n)
{
	int num;

	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else
	{
		for (num = 2; num < n; a++)
		{
			if (n % i == 0)
			{
				return (0);
			}
		}
	return (1);
	}
}

long int biggestFactor(long int a)
{
	long int f, factor;

	factor = a;
	for (f = 2; f <= factor; f++)
	{
		if (isPrime(factor) == 1)
		{
			break;
		}
		else
		{
			if ((factor % f == 0) && (isPrime(f) == 1))
			{
				factor = factor / f;
				continue;
			}
			else
			{
				factor = factor;
			}
		}
	}
	return (factor);
}
