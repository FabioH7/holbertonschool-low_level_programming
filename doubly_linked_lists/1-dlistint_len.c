#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * dlistint_len - print list int
 * @h: list to print
 * Return: list len
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
