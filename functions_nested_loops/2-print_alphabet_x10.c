#include <unistd.h>
#include "main.h"

/**
 * print_alphabet_x10 - main func
 * Return: 0 if successful
 */

void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i <= 9; i++)
		print_alphabet();
	_putchar('\n');
}
