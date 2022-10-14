#include "main.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_diagsums - main function
 * @a: param
 * @size: param
 * Return: pointer
 */

void print_diagsums(int *a, int size)
{
	int i;
	int sum1, sum2;

	i = 0;
	sum1 = 0;
	sum2 = 0;
	while (i < size)
	{
		sum1 += a[(size + 1) * i];
		sum2 += a[(size - 1) * (i + 1)];
		i++;
	}
	printf("%d, %d\n", sum1, sum2);
}
