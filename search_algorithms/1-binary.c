#include "search_algos.h"

/**
 * binary_search - search for a given value on a given array
 * @array: array to search in
 * @size: size of array
 * @value: value to find
 * Return: index of found value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, middle, i = left;
	int right = size - 1;

	if (array == NULL || size < 1)
		return (-1);
	while (left != right)
	{
		printf("Searching in array: ");
		i = left;
		while (i < right + 1)
		{
			if (i + 1 != right + 1)
				printf("%i, ", array[i]);
			else
				printf("%i\n", array[i]);
			i++;
		}
		middle = (left + right) / 2;
		if (array[middle] > value)
			right = middle - 1;
		else
			left = middle + 1;
	}
	if (array[middle] == value)
		return (middle);
	printf("Searching in array: ");
	printf("%i\n", array[left]);
	if (array[right] == value)
		return (right);
	return (-1);
}
