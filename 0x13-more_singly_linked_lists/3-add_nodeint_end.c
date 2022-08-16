#include "lists.h"


/**
 * add_nodeint_end - add node at the end
 * @head: head
 * @n: element
 * Return: new_head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node_head;
	listint_t *node_end;

	node_head = malloc(sizeof(listint_t));

	if (node_head == NULL)
		return (NULL);

	if (node_head != NULL)
	{
		node_head->n = n;
		node_head->next = NULL;

		if (*head == NULL)
		{
			*head = node_head;
			return (node_head);
		}
		node_end = *head;
		while (node_end->next != NULL)
			node_end = node_end->next;
		node_end->next = node_head;
		return (node_head);
	}

	return (NULL);
}
