#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - create array function
 * @str: string to allocate
 * Return: ptr
 */
char *_strdup(char *str)
{
	char *ptr;
	size_t i = 0;
	int len = 0;

	if (str == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	ptr = malloc(sizeof(char) * len + 1);
	if (ptr == NULL)
		return (NULL);
	while (ptr[i] != '\0' || str[i] != '\0')
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
