#include <unistd.h>
#include "main.h"

/**
 * print_numbers - main function
 * Return: 1 if uppercase and 0 if false
 */

void print_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
