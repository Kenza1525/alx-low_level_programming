#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - return the sum of the list
 * @head: linked list
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
