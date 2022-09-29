#include "lists.h"
/**
 * print_dlistint - print the elements of a list
 * @h : list
 * Return: Number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *head;

	head = h;

	while (head != NULL)
	{
		printf("%d\n", head->n);
		count++;
		head = head->next;
	}
	return (count);
}
