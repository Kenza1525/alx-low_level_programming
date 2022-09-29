#include "lists.h"
/**
 * get_dnodeint_at_index - returns a node at a given index
 * @index: index of the node, starting from 0
 * @head: head node
 * Return: if node does not exist return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}

	return (head);
}
