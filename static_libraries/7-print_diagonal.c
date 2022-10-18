#include <unistd.h>
#include "main.h"

/**
 * print_diagonal - main function
 * @n: parameter
 * Return: 1 if uppercase and 0 if false
 */

void print_diagonal(int n)
{
	int diagonal, horisontal;

	for (diagonal = 0; diagonal < n; diagonal++)
	{
		for (horisontal = 0; horisontal < diagonal; horisontal++)
			_putchar(' ');
		_putchar('\\');
		if (diagonal == n - 1)
			continue;
		_putchar('\n');
	}
	_putchar('\n');
}
