#include <unistd.h>
#include "main.h"

/**
 * _abs - main func
 * Return: 0 if successful
 * @n: parameter of the function
 */

int _abs(int n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}
