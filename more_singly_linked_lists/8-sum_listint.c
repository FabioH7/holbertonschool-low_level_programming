#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint - get sum of list
 * @head: list to find sum
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	if (head == NULL)
		return (0);
	temp = head;
	while  (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
