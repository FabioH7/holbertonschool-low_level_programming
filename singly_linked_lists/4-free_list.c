#include "lists.h"
#include <stdio.h>

/**
 * free_list - print list values
 * @head: list value to print
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
