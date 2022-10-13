#include "main.h"

/**
 * _memset - main function
 * @s: param
 * @b: param
 * @n: param
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *pnt = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		pnt[i] = b;
	}
	return (s);
}
