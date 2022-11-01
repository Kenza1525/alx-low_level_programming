#include "hash_tables.h"
#include <stdlib.h>
/**
 * hash_table_create - create a hash function
 * @size: size of the has function
 * Return: hash
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash;

	hash = malloc(sizeof(hash_table_t));
	if (hash == NULL)
		return (NULL);
	hash->size = size;
	hash->array = malloc(sizeof(hash_node_t *) * size);
	if (hash->array == NULL)
		return (NULL);
	return (hash);
}
