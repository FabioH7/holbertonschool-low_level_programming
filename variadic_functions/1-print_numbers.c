#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print num function
 * @n: number of arguments to print
 * @separator: separator
 * Return: sum
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i;

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(va, int));
		if (separator != NULL)
		{
			if (i != n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(va);
}
