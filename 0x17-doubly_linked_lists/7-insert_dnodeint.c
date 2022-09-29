#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a node at a given index
 * @h: head node
 * @idx: index to insert the node
 * @n: the node value
 * Return: newNode
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *newNode = malloc(sizeof(dlistint_t));

	if (newNode == NULL)
		return (NULL);
	if (idx == 0)
		return	(add_dnodeint(h, n));

	while (idx > 1)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		idx--;
	}
	if (tmp->next == NULL)
		return	(add_dnodeint_end(h, n));
	newNode->n = n;
	newNode->prev = tmp;
	newNode->next = tmp->next;
	tmp->next->prev = newNode;
	tmp->next = newNode;
	return (newNode);
}
