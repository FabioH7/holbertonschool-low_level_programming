#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert node in list
 * @head: first node of list
 * @n: num of node
 * Return: pointer to node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *pnt;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);
	temp = malloc(sizeof(listint_t));
	temp->n = n;
	temp->next = NULL;
	pnt = *head;
	if (idx == 0)
	{
		pnt = temp;
		return (pnt);
	}
	while (count !=  idx - 1)
	{
		count++;
		pnt = pnt->next;
		if (pnt == NULL)
			return (NULL);
	}
	temp->next = pnt->next;
	pnt->next = temp;
	return (temp);
}
