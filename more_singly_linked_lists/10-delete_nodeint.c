#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - delete node in list
 * @head: first node of list
 * @index: where to delete node
 * Return:1 if succesful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp, *del;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		temp->next = NULL;
		free(temp);
		return (1);
	}
	while (count !=  index - 1)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
		count++;
	}
	del = temp->next;
	temp->next = temp->next->next;
	del->next = NULL;
	free(del);
	return (1);
}
