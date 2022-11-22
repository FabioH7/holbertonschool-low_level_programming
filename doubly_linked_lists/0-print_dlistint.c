#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_dlistint - print list int
 * @h: list to print
 * Return: list len
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
