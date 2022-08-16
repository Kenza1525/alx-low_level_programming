#include "lists.h"


/**
 * add_nodeint - add a new node at the beggining
 * @head: node
 * @n: element
 * Return: head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	if (new_node != NULL)
	{
		new_node->n = n;
		new_node->next = (*head);

		(*head) = new_node;

		return (new_node);
	}

	return (NULL);
}
