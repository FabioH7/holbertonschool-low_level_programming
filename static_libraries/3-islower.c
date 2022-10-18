#include <unistd.h>
#include "main.h"

/**
 * _islower - main func
 * Return: 0 if successful
 * @c: parameter of the function
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
