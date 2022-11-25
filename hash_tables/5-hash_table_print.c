#include "hash_tables.h"

/**
 * hash_table_print - get node
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *p;
	int flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; ht && i < ht->size; i++)
	{
		p = ht->array[i];
		while (p)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", p->key, p->value);
			p = p->next;
			flag = 1;
		}
	}
	printf("}\n");
}
