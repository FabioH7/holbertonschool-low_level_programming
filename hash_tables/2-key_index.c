#include "hash_tables.h"

/**
 * key_index - create a hash table
 * @size: array size
 * @key: string to encrypt
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
