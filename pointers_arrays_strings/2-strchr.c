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
	char *pnt, *p;
	unsigned int i;
	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			pnt = &s[i];
			return (pnt);
		}
	}
	p = &c;
	return (p);
}
