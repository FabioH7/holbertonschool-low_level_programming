#include "main.h"

/**
 * _strncpy - main function
 * Return: returns dest
 * @n: param
 * @dest: destination param
 * @src: source param
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
