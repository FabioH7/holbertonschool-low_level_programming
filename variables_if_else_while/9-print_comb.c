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

	for (x = 0; x <= 9; x++)
	{
		putchar(x + '0');
	if (x < 9)
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
return (0);
}
