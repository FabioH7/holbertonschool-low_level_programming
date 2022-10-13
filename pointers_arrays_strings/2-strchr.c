#include "main.h"
#include <stddef.h>

/**
 * _strchr - main function
 * @s: param
 * @c: param
 * Return: pnt
 */

char *_strchr(char *s, char c)
{
	char *pnt;
	unsigned int i;

	for (i = 0; *s; i++)
	{
		if (s[i] == c && c != '\0')
		{
			pnt = &s[i];
			return (pnt);
		}
		else 
			return ("\0");
	}
	return (NULL);
}
