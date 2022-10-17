#include <unistd.h>
#include "main.h"

/**
 * factorial - writes the character c to stdout
 * @n: The character to print
 * Return: strlen value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (1);
	return (factorial(n - 1) * n);
}
