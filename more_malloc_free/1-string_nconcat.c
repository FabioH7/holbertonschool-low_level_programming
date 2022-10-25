#include <stdio.h>
#include <stdlib.h>
#include "main.h"
unsigned int _strlen(char *string);

/**
 * string_nconcat - create array function
 * @s1: string to concatenate
 * @s2: string to concatenate
 * @n: bytes to tae from s2
 * Return: ptr
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pnt;
	size_t i = 0, len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= _strlen(s2))
		len = _strlen(s1) + _strlen(s2);
	else
		len = _strlen(s1) + n;
	pnt = malloc(sizeof(char) * (len + 1));
	if (pnt == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		pnt[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0' && n != 0)
	{
		pnt[i] = *s2;
		s2++;
		i++;
		n--;
	}
	pnt[i] = '\0';
	return (pnt);
}

/**
 * _strlen - find string length
 * @string: string to find length
 * Return: len
 */
unsigned int _strlen(char *string)
{
	unsigned int len = 0;

	if (string == NULL)
		string = "";
	while (string[len] != '\0')
		len++;
	return (len);
}
