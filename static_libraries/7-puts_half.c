#include "main.h"

/**
 * puts_half - main function
 * @str: param
 */
void puts_half(char *str)
{
	int i = 0, len;

	while (str[i] != '\0')
	{
		i++;
	}
	len = i;
	for (i = 0; i < len; i++)
	{
		if (i > len / 2 && i % 2 == 0)
			_putchar(str[i]);
		else if (i >= len / 2 && i % 2 != 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
