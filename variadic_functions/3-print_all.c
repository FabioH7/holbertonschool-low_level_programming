#include <stdio.h>
#include <stdarg.h>
/**
 * print_ch - print char function
 * @ch: char to print
 */

void print_ch(char ch)
{
	printf("%c", ch);
}

/**
 * print_str - print string function
 * @str: string to print
 */

void print_str(char *str)
{
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_int - print num function
 * @num: number of arguments to print
 */

void print_int(int num)
{
	printf("%i", num);
}

/**
 * print_float - print num function
 * @numf: number of arguments to print
 */

void print_float(float numf)
{
	printf("%f", numf);
}
/**
 * print_all - print num function
 * @format: number of arguments to print
 */
void print_all(const char * const format, ...)
{
	va_list va;
	unsigned int i = 0;

	va_start(va, format);
	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				print_ch(va_arg(va, int));
				break;
			case 's':
				print_str(va_arg(va, char *));
				break;
			case 'i':
				print_int(va_arg(va, int));
				break;
			case 'f':
				print_float(va_arg(va, double));
				break;
			default:
				break;
		}
		if ((format[i] == 'c' || format[i] == 's' || format[i] == 'i'
		|| format[i] == 'f') && format[i + 1] != '\0')
		{
				printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(va);
}
