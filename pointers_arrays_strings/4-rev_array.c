#include "main.h"

/**
 * reverse_array - main function
 * Return: returns sum
 * @a: param
 * @n: destination param
 */
void reverse_array(int *a, int n)
{
	int tmp, i;

	for (i = 0; i <= n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
