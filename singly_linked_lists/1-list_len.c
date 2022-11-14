#include "lists.h"
#include <stdio.h>

/**
 * list_len - return  num of elements
 * @h: list element to count
 * Return: Number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
