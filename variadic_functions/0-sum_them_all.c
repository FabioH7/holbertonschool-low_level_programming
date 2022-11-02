#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - sum function
 * @n: number of arguments to add
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list va;
	unsigned int i, sum = 0;

	if (n == 0)
		return  (0);
	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(va, unsigned int);
	}
	return (sum);
}
