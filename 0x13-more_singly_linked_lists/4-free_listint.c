#include "lists.h"


/**
 * free_listint - free listint
 * @head: listint
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head != NULL)
	{
		node = head;
		head = head->next;

		free(node);
	}
}
