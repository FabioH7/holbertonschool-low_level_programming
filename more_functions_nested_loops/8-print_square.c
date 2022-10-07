#include <unistd.h>
#include "main.h"

/**
 * print_square - main function
 * @size: parameter
 * Return: 1 if uppercase and 0 if false
 */

void print_square(int size)
{
	int diagonal, horisontal;

	for (diagonal = 0; diagonal < size; diagonal++)
	{
		for (horisontal = 0; horisontal < size; horisontal++)
			_putchar('#');
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
