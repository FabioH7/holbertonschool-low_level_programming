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
	unsigned int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; j < n; j++)
			pnt[i] = src[j];
	}
	return (dest);
}
