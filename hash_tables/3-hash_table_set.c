#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - create a hash table
 * @value: value
 * @ht: table
 * @key: string to encrypt
 * Return: index
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *curr;
	unsigned long int idx;

	if (key == NULL || ht == NULL)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	curr = ht->array[idx];
	while (curr != NULL)
	{
		if (strcmp(key, curr->key) == 0)
		{
			free(curr->value);
			curr->value = strdup(value);
			return (1);
		}
		curr = curr->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
