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
	size_t i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	pnt = malloc(sizeof(char) * _strlen(s1) + _strlen(s2) - 1);
	if (pnt == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		pnt[i] = *s1;
		s1++;
		i++;
	}
	if (n >= _strlen(s2))
	{
		while (*s2 != '\0')
		{
			pnt[i] = *s2;
			s2++;
			i++;
		}
	}
	else
	{
		while (*s2 != '\0' && j < n)
		{
			pnt[i] = s2[j];
			j++;
			i++;
		}
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
