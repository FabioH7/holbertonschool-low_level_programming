#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_dnodeint_end - print list int
 * @head: list to print
 * @n: num
 * Return: list len
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	if (temp != NULL)
		temp->next = new;
	new->prev = temp;
	return (new);
}
