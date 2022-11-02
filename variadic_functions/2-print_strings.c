#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print num function
 * @n: number of arguments to print
 * @separator: separator
 * Return: sum
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list va;
	unsigned int i;
	char *p;

	va_start(va, n);
	for (i = 0; i < n; i++)
	{
		p = va_arg(va, char *);
		if (p == NULL)
			p = "(nil)";
		printf("%s", p);
		if (separator != NULL)
		{
			if (i != n - 1)
				printf("%s", separator);
		}
	}
	printf("\n");
	va_end(va);
}
