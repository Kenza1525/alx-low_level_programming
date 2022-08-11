#include "lists.h"

/**
 * add_node - add a node at the beggining of list
 * @head: head
 * @str: string
 * Return: 0
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int i, count = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL || str == NULL)
		return (NULL);
	if (new != NULL)
	{
		new->str = strdup(str);
		if (new->str == NULL)
		{
			free(new);
			return (NULL);
		}
		for (i = 0; str[i] != '\0'; i++)
		{
			count++;
		}
		new->len = count;
		new->next = *head;
		*head = new;
		return (new);
	}
		return (NULL);
}
