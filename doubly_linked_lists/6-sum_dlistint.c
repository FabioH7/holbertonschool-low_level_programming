#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * sum_dlistint - print list int
 * @head: list to print
 * Return: list len
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *new;
	unsigned int sum = 0;

	new = head;
	while (new != NULL)
	{
		sum += new->n;
		new = new->next;
	}
	return (sum);
}
