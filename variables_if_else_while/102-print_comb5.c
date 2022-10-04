#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - is where the function starts
 * Return: shows that the function works
 */
int main(void)
{
	int x;
	int y;

	for (x = 0; x <= 98; x++)
	{
		for (y = 1; y <= 99; y++)
		{
			if (x != y && x < y)
			{
				putchar(x / 10 + '0');
				putchar(x % 10 + '0');
				putchar(' ');
				putchar(y / 10 + '0');
				putchar(y % 10 + '0');
			if (x != 98 || y != 99)
				{
				putchar(',');
				putchar(' ');
				}
			}
		}
	}
	putchar('\n');
return (0);
}
