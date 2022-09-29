#include "lists.h"
/**
 * dlistint_len - returns the number of elements of a list
 * @h: head of node
 * Return: Number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count = 0;

	temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}
	return (count);
}
