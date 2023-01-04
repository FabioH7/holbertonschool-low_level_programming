#include "search_algos.h"
#include <math.h>

/**
 * jump_search - search for value in sorted array using jump search algorithm
 * @array: array to search in
 * @size: length of array
 * @value: value to find
 * Return: returns index if value is found or -1 if not found
 */
int jump_search(int *array, size_t size, int value)
{
	int temp = sqrt(size);
	size_t i = 0, pnt;

	while (i < size)
	{
		if (array[i] >= value)
		{
			pnt = i;
			i = i - temp;
			printf("Value found between indexes [%li] and [%li]\n", i, pnt);
			while (i <= pnt)
			{
				printf("Value checked array[%li] = [%i]\n", i, array[i]);
				if (array[i] == value)
					return (i);
				i++;
			}
		}
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		i += temp;
		if (i >= size)
		{
			pnt = i;
                        i = i - temp;
                        printf("Value found between indexes [%li] and [%li]\n", i, pnt);
                        while (i < pnt)
                        {
                                printf("Value checked array[%li] = [%i]\n", i, array[i]);
                                if (array[i] == value)
                                        return (i);
                                i++;
                        }
		}
	}
	return (-1);
}
