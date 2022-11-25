#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - create a hash table
 * @value: value
 * @ht: table
 * @key: string to encrypt
 * Return: index
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;

	if (key == NULL || ht == NULL)
		return (NULL);
	idx = key_index((const unsigned char *)key, ht->size);
	if (ht->array[idx] == NULL)
		return (NULL);
	return (ht->array[idx]->value);
}
