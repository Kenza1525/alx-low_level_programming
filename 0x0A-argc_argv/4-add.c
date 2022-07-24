#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * test - test if it's a number
 * @array: array of numbers
 * Return: true only if entire string is a number, false if not
 */

bool test(char *array)
{
	int j = 0;

	for (j = 0; array[j]; j++)
	{
		if (!(array[j] >= '0' && array[j] <= '9'))
			return (0);
	}
	return (1);
}

/**
 * main - print sum if all arguments given are numbers
 * @argc: argv size
 * @argv: array
 * Return: 0 on success, 1 if there is an error
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (i < argc)
	{
		if (test(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
