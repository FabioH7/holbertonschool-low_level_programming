#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert node in list
 * @head: first node of list
 * @n: num of node
 * @idx: where to insert node
 * Return: pointer to node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *pnt;
	unsigned int count = 0;

	pnt = *head;
	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	if (idx == 0)
	{
		temp->next = pnt;
		*head = temp;
		return (temp);
	}
	while (count !=  idx - 1)
	{
		if (pnt == NULL || pnt->next == NULL)
			return (NULL);
		pnt = pnt->next;
		count++;
	}
	temp->next = pnt->next;
	pnt->next = temp;
	return (temp);
}
