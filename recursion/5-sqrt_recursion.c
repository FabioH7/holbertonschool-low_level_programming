#include <unistd.h>
#include "main.h"
int sqrt_nrm(int x, int n);

/**
 * _sqrt_recursion - writes the character c to stdout
 * @n: param
 * Return: strlen value
 */
int _sqrt_recursion(int n)
{
	int root = 0;

	return (sqrt_nrm(root, n));
}

int sqrt_nrm(int root, int n)
{
	if (root * root == n)
		return (root);
	else if (root * root > n)
		return (-1);
	return (sqrt_nrm(root + 1, n));
}
