#include <unistd.h>
#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - main func
 * @n: first int
 * Return: sum of int x and int y
 */

void print_to_98(int n)
{
	int j;

	if (n >= 98)
	{
		for (j = n; j >= 98; j--)
		{
			printf("%d", j);
			if (j != 98)
				printf(", ");
		}
	}
	else
	{
		for (j = n; j <= 98; j++)
		{
			printf("%d", j);
			if (j != 98)
				printf(", ");
		}
	}
	printf("\n");
}
