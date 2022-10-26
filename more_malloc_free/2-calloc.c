#include <stdio.h>
#include <stdlib.h>
#include "main.h"
unsigned int _strlen(char *string);

/**
 * _calloc - create array function
 * @nmemb: string to concatenate
 * @size: string to concatenate
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = calloc(nmemb, size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
