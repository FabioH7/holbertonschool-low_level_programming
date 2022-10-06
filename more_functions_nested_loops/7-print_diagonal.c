#include <unistd.h>
#include "main.h"

/**
 * print_diagonal - main function
 * @n: parameter
 * Return: 1 if uppercase and 0 if false
 */

void print_diagonal(int n)
{
	int diagonal;

	for (diagonal = 0; diagonal <= n; diagonal++)
	{
		if (diagonal > 0)
			_putchar('\\');
	}
	_putchar('\n');
}
