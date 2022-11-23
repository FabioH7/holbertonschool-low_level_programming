#include "lists.h"

/**
 * delete_dnodeint_at_index - function to count elements of list
 * @head: header of list
 * @index: index to add node
 * Return: the new added node
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *del;
	unsigned int count = 0;

	if (*head == NULL)
		return (-1);
	tmp = *head;
	if (index == 0)
	{
		if ((*head)->next == NULL)
		{
			*head = NULL;
			return (1);
		}
		*head = tmp->next;
		(*head)->prev = NULL;
		free(tmp);
		return (1);
	}
	while (count != index - 1)
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
		count++;
	}
	del = tmp->next;
	tmp->next = del->next;
	if (del->next != NULL)
	{
		del->next->prev = del->prev;
		del->next = NULL;
		del->prev = NULL;
	}
	free(del);
	return (1);
}
