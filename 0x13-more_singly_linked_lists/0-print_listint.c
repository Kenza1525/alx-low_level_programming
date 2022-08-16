#include "lists.h"


/**
 * print_listint - print list
 * @h: list elements
 * Return: h
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
