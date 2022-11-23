#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at index
 * @h: list head
 * @idx: where to insert node
 * @n: value
 * Return: ptr to node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *temp;
	unsigned int count = 0;

	temp = *h;
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	{
		free(new);
		return (add_dnodeint(h, n));
	}
	while (count != idx - 1)
	{
		if (temp == NULL)
			return (NULL);
		temp = temp->next;
		count++;
	}
	if (temp->next == NULL)
	{
		free(new);
		return (add_dnodeint_end(h, n));
	}
	new->next = temp->next;
	new->prev = temp;
	temp->next->prev = new;
	temp->next = new;
	return (new);
}
