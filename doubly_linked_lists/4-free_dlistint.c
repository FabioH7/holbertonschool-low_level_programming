#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_dlistint - print list int
 * @head: list to print
 * Return: list len
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
