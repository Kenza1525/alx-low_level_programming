#include "lists.h"
/**
 *  get_nodeint_at_index - get node at index
 *  @head: head list
 *  @index: index
 *  Return: node at index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	while (index > 0)
	{
		head = head->next;
		index--;
	}

	if (head == NULL)
		return (NULL);

	return (head);
}
