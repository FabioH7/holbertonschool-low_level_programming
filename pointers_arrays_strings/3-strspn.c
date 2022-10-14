#include "main.h"
#include <stddef.h>

/**
 * _strspn - main function
 * @s: param
 * @accept: param
 * Return: len
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j, len = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
			j++;
		}
		if (s[i] != accept[j])
			return (len);
		i++;
	}
	return (len);
}
