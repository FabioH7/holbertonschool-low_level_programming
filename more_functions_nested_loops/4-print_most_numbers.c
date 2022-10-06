#include <unistd.h>
#include "main.h"

/**
 * print_most_numbers - main function
 * Return: 1 if uppercase and 0 if false
 */

void print_most_numbers(void)
{
	int a;

	for (a = '0'; a <= '9'; a++)
	{
		if (a != '2' && a != '4')
			continue;
		_putchar(a);
	}
	_putchar('\n');
}
