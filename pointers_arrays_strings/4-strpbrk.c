#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - main function
 * @s: param
 * @accept: param
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j;
	char *pnt;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				pnt = &s[i];
				return (pnt);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
