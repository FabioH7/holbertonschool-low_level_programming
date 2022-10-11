#include "main.h"
#include <stdio.h>

/**
 * print_array - main function
 * @a: param
 * @n: param
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
		else
			printf("\n");
		if (n <= 0)
			printf("\n");
	}
}
