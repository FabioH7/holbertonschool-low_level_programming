#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * _strpbrk - main function
 * @s: param
 * @accept: param
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] == needle[j])
			{
				return (needle);
			}
		}
	}
	return ('\0');
}
