#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - delete list int
 * @head: list to print
 * Return: list n
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	temp = *head;
	*head = (*head)->next;
	free(temp);
	temp = NULL;
	return (n);
}
