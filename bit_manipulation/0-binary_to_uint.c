#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary number to convert
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, j;
	unsigned int num = 1, uint = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
		i++;
	for (j = i - 1; j >= 0; j--)
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}
		if (b[j] == '1')
			uint += num;
		num *= 2;

	}
	return (uint);
}
