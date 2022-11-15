#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - add node to beginning of list
 * @head: where to add the node
 * @n: number value of node
 * Return: head
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *last;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
		*head = ptr;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = ptr;
	}
	return (ptr);
}
