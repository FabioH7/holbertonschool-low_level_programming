#include <unistd.h>
#include "main.h"

/**
 * main - main func
 * Return: 0 if successful
 */

int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
		_putchar(i);
	_putchar('\n');
}
