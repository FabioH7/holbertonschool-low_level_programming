#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - main function
 * @min: min param
 * @max: max param
 * Return: ptr
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i = 0;
	int len = max - min;

	if (min > max)
		return (NULL);
	ptr = malloc(len * sizeof(int));
	if  (ptr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		ptr[i] = min;
		min++;
	}
	return (ptr);
}
