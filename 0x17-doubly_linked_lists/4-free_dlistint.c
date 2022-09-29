#include "lists.h"
/**
 * free_dlistint - Frees a list
 * @head: head node
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
