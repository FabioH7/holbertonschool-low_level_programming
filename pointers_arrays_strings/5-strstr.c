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
	unsigned int i = 0, j;

	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] != '\0')
		{
			if (haystack[i + j] == needle[j])
			{
				return (needle);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
