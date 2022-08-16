#include "lists.h"


/**
 * delete_nodeint_at_index - delete node at a given index
 * @head: head
 * @index: index to be deleted
 * Return: 1 if index is deleted sucesfully 0 if not
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *delete = *head;
	unsigned int i;

	if (delete == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = (*head)->next;
		free(delete);
		return (1);
	}

	i = 0;
	while (i < (index - 1))
	{
		if (delete == NULL || delete->next == NULL)
			return (-1);

		delete = delete->next;
		i++;
	}

	tmp = delete->next;
	delete->next = tmp->next;
	free(tmp);
	return (1);

}
