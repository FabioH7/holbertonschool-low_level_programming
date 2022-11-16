#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - return nth node of list
 * @head: list to find int
 * @index: nth node
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while  (count != index)
	{
		temp = temp->next;
		count++;
	}
	return (temp);
}
