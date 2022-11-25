#include "hash_tables.h"

/**
 * hash_table_print - get node
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p, *temp;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		p = ht->array[i];
		if (p)
		{
			temp = ht->array[i];
			while (temp)
			{
				p = temp->next;
				free(temp->key);
				free(temp->value);
				free(temp);
				temp = p;
			}
		}
	}
	free(ht->array);
	free(ht);
}
