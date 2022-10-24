#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - create array function
 * @size: size
 * @c: char to print
 * Return: ptr
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	size_t i = 0;

	if (size == 0)
		return (NULL);
	ptr = malloc(size);
	if  (ptr == NULL)
		return (NULL);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr);
}
