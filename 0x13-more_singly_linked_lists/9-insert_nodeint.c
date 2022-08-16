#include "lists.h"


/**
 * insert_nodeint_at_index - insert a node at a given index
 * @head: head
 * @idx: index
 * @n: value
 * Return: head
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *duplicate = *head;
	unsigned int i;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = duplicate;
		*head = new_node;
		return (new_node);
	}
	i = 0;
	while (i < (idx - 1))
	{
		if (duplicate == NULL || duplicate->next == NULL)
			return (NULL);

		duplicate = duplicate->next;
		i++;
	}
	new_node->next = duplicate->next;
	duplicate->next = new_node;

	return (new_node);
}
