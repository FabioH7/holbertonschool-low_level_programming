#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * _strstr - main function
 * @haystack: param
 * @needle: param
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;
	int boolean;

	if (*needle == '\0')
		return (haystack);
	for (i = 0; haystack[i] != '\0'; i++)
	{
		boolean = 1;
		if (haystack[i] == needle[0])
		{
			for (j = 1; needle[j] != '\0'; j++)
			{
				if (haystack[i + j] != needle[j])
					boolean = 0;
			}
		}
		else
			boolean = 0;
		if (boolean)
			return (&haystack[i]);
	}
	return (NULL);
}
