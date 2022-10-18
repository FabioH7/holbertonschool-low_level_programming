#include <unistd.h>
#include "main.h"
int sqrt_nrm(int x, int n);

/**
 * is_prime_number - writes the character c to stdout
 * @n: param
 * Return: strlen value
 */

int is_prime_number(int n)
{
	int root = 0;

	return (sqrt_nrm(root, n));
}

/**
 * sqrt_nrm - second function
 * @root: param
 * @n: second param
 * Return: root
 */
int sqrt_nrm(int root, int n)
{
	if (n < 0)
		return (0);
	if (root * root == n)
		return (0);
	else if (root * root > n)
		return (1);
	return (sqrt_nrm(root + 1, n));
}
