#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - create array function
 * @s1: string to concatenate
 * @s2: string to concatenate
 * Return: ptr
 */
char *str_concat(char *s1, char *s2)
{
	char *pnt;
	size_t len1 = 0, len2 = 0, i = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	pnt = malloc(len1 + len2 + 1);
	if (pnt == NULL)
		return (NULL);
	while (*s1 != '\0')
	{
		pnt[i] = *s1;
		s1++;
		i++;
	}
	while (*s2 != '\0')
	{
		pnt[i] = *s2;
		s2++;
		i++;
	}
	pnt[i] = '\0';
	return (pnt);
}
