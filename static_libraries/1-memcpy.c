#include "main.h"

/**
 * _memcpy - main function
 * @dest: param
 * @src: param
 * @n: param
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *pnt = dest;
	unsigned int j;

	for (j = 0; j < n; j++)
		pnt[j] = src[j];
	return (dest);
}
