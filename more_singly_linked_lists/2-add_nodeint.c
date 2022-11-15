#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - add node to beginning of list
 * @head: where to add the node
 * @n: number value of node
 * Return: head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr->n = n;
	ptr->next = NULL;
	ptr->next = *head;
	*head = ptr;
	return (*head);
}
