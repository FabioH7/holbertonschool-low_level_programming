#include <unistd.h>
#include "main.h"

/**
 * _puts_recursion - writes the character c to stdout
 * @s: The character to print
 */
void _puts_recursion(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
