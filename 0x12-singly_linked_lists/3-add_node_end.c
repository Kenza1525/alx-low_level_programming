#include "lists.h"

/**
 * add_node_end - add node at the end of the list
 * @head: head
 * @str: str
 * Return: 0
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int i;
	list_t *new, *first;

	new = malloc(sizeof(list_t));

	if (new != NULL)
	{
		new->str = strdup(str);

		if (str == NULL || new->str == NULL)
		{
			free(new);
			return (NULL);
		}
		i = 0;
		while (new->str[i] != '\0')
		{
			i++;
		}

		new->len = i;
		new->next = NULL;

		if (*head == NULL)
		{
			*head = new;
			return (new);
		}
		first = *head;

		while (first->next != NULL)
		{
			first = first->next;
		}
		first->next = new;

		return (new);
	}
	return (NULL);
}
