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
	int i = 0, uint = 0, last;
	unsigned int num;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	}
	num = atoi(b);
	i = 0;
	while (num != 0)
	{
		last = num % 10;
		uint += last * power(2, i);
		num /= 10;
		i++;
	}
	return (uint);
}

/**
 * power - power of a num
 * @x: int
 * @y: int
 * Return: power
 */
int power(int x, int y)
{
	int i = 0, sum = 1;

	while (i < y)
	{
		sum *= x;
		i++;
	}
	return (sum);
}
