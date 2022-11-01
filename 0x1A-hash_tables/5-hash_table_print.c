#include "hash_tables.h"
#include <stdio.h>
/**
 * hash_table_print - print the hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned long int i, j;
	char *s;

	s = malloc(sizeof(char *) * 1024);

	if (ht == NULL)
		return;
	for (j = 0; j < ht->size; j++)
	{
		if (ht->array != NULL)
			tmp = ht->array[j];
		while (tmp != NULL)
		{
			s = tmp->key;
			tmp = tmp->next;
		}
	}

	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array != NULL)
			node = ht->array[i];
		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			if (node->key != s)
				printf(", ");
			node = node->next;
		}
	}
	putchar('}');
	putchar('\n');
}
