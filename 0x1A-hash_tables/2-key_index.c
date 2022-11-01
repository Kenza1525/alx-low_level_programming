#include "hash_tables.h"
/**
 * key_index - key index
 * @key: key
 * @size: size of the array
 * Return: hash_djb2(key) % size or 0
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);
	return (hash_djb2(key) % size);
}
