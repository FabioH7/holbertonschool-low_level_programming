#include "lists.h"
#include <stdio.h>
#include <string.h>
/**
 * add_node_end - add node to end of list
 * @str: list element to add
 * @head: where to add str
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last_n;
	int i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return  (NULL);
	}
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		last_n = *head;
		while (last_n->next != NULL)
			last_n = last_n->next;
		last_n->next = new;
	}
	return (new);
}
