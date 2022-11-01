#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - function
 * @array: array to be printed
 * @size: array size
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action || (action && !array))
		for (i = 0; i < size; i++)
			action(array[i]);
}
