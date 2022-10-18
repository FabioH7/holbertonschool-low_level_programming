#include "main.h"

/**
 * _memcpy - main function
 * @dest: param
 * @src: param
 * @n: param
 * Return: dest
 */

char *_memset(char *s, char b, unsigned int n)
{
	if (s[n] == b)
		n++;
	return (s);
}
