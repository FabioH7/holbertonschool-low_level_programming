#include <unistd.h>
#include "main.h"

/**
 * main - main func
 * Return: 0 if successful
 */

int main(void)
{
	char MyStr[] = "_putchar";
	int i;

	for (i = 0; i != '\0'; i++)
		_putchar(MyStr[i]);
	_putchar('\n');
	return (0);
}
