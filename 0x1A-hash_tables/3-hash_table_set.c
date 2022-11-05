#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 * hash_table_set - adds an element to the hash table
 * @ht: Hash table
 * @key: the key
 * @value: Value associated with the key
 *
 * Return: 1 if success and 0 if failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *elem = NULL;
	unsigned long int index;
	hash_node_t *head;

	if (ht == NULL || key == NULL || key[0] == '\0')
	{
		return (0);
	}

	elem = malloc(sizeof(hash_node_t));

	if (elem == NULL)
	{
		return (0);
	}

	elem->key = strdup(key);
	elem->value = strdup(value);
	elem->next = NULL;

	index = key_index((unsigned char *)key, ht->size);
	head = ht->array[index];
	while (head != NULL)
	{
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = elem->value;
			return (1);
		}
	}
	if (head == NULL)
		ht->array[index] = elem;
	else
	{
		elem->next = ht->array[index];
		ht->array[index] = elem;
	}
	return (1);
}
