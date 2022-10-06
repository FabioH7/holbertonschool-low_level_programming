#include <unistd.h>
#include "main.h"

/**
 * print_line - main function
 * @n: parameter
 * Return: 1 if uppercase and 0 if false
 */

void print_line(int n)
{
	int lineprint;

	for (lineprint = 0; lineprint <= n; lineprint++)
	{
		if (lineprint > 0)
			_putchar('_');
	}
	_putchar('\n');
}
