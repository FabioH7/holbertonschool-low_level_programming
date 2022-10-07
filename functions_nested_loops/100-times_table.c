#include <unistd.h>
#include "main.h"
/**
 * print_times_table - main func
 * Return: 0 if successful
 * @n: parameter
 */
void print_times_table(int n)
{
	int x, y, z;

	if (n <= 15 && n >= 0)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('0');
			for (y = 0; y <= n; y++)
			{
				z = x * y;
				if (z >= 100 && z <= 225)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(z / 100 + '0');
					_putchar(z / 10 % 10 + '0');
					_putchar(z % 10 + '0');
				}
				else if (z < 10 && y != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				}
				else if (z >= 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(z / 10 + '0');
					_putchar(z % 10 + '0');
				}
			}
			_putchar('\n');
		}
	}
}
