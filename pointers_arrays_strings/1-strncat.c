#include "main.h"

/**
 * _strncat - main function
 * @dest: param
 * @src: param
 * @c: param
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (dest[i] != 0)
	{
		i++;
	}
	for (j = 0; src[j] != 0 && j < n; j++)
		dest[i + j] = src[j];
	dest[i + j] = '\0';
	return (dest);
}
