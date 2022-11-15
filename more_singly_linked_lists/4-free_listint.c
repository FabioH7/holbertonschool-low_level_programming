#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - add node to beginning of list
 * @head: where to add the node
 */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head != NULL)
	{
		ptr = head;
		free(ptr);
		head = head->next;
	}
}
