#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * listint_len - print intlist len
 * @h: list len to print
 * Return: list len
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
