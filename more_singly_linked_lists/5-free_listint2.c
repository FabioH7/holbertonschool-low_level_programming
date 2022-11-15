#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - add node to beginning of list
 * @head: where to add the node
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		ptr = *head;
		*head = (*head)->next;
		free(ptr);
	}
	head = NULL;
}
