#include <unistd.h>
#include "main.h"

/**
 * print_alphabet - main func
 * Return: 0 if successful
 */

void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
