#include <unistd.h>
#include "main.h"

/**
 * _pow_recursion - writes the character c to stdout
 * @x: param
 * @y: param
 * Return: strlen value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * (_pow_recursion(x, y - 1)));
}
