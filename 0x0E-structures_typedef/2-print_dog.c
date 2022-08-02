#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints information of a dog
 * @d: structure variable
 *
 * Return: 0
 */
void print_dog(struct dog *d)
{
	if (d = NULL)
		return;
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("Name: (nil)\n");
	if (d->age != NULL)
		printf("Age: %s\n", d-> age);
	else
		printf("Age: (nil)\n");
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("Owner: (nil)\n");
}
