#include <unistd.h>
#include "main.h"

/**
 * print_last_digit - main func
 * Return: 0 if successful
 * @n: parameter of the function
 */

int print_last_digit(int n)
{
	int m = n % 10;

	if (m < 0)
		m = m * -1;
	_putchar(m + '0');
	return (m);
}
