#include <unistd.h>
#include "main.h"

/**
 * _strlen_recursion - writes the character c to stdout
 * @s: The character to print
 * Return: strlen value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);
}
