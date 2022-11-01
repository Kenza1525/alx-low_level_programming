#include "hash_tables.h"
#include <string.h>
/**
 * hash_table_set - adds an element to has table
 * @ht: hash table you want to add a element
 * @key: is the key
 * @value: value associated with the key
 * Return: 1 if succeded else 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new, *node;

	if (ht == NULL || key == NULL)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (node->value == NULL)
				return (0);
			return (1);
		}

		node = node->next;
	}
	new = malloc(sizeof(hash_node_t));
		if (new == NULL)
			return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (new->value == NULL)
		return (0);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
