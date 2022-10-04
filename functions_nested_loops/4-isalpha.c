#include <unistd.h>
#include "main.h"

/**
 * _isalpha - main func
 * Return: 0 if successful
 * @c: parameter of the function
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
