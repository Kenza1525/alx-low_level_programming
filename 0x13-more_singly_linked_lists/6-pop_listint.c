#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * pop_listint - delete the head of the node
 * @head: head of the node
 * Return: the new head
 */

int pop_listint(listint_t **head)
{
	listint_t *node;
	int num;

	if (head == NULL || *head == NULL)
		return (0);

	node = (*head);
	num = (*head)->n;
	*head = (*head)->next;

	free(node);

	return (num);
}
