#include "search_algos.h"

/**
 * linear_search - finds the index of the given value
 * @array: array to search
 * @size: size of array
 * @value: value to find
 * Return: number of index or -1 if not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
