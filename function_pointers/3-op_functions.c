#include <stdio.h>
#include "3-calc.h"
/**
 * op_add - calculates the sum of two integers
 * @a: first int
 * @b: second int
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - calculates the difference of two integers
 * @a: first int
 * @b: second int
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - calculates the product of two integers
 * @a: first int
 * @b: second int
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - calculates the division of two integers
 * @a: first int
 * @b: second int
 * Return: the result of division of a and b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - calculates the remainder of the devision of two integers
 * @a: first int
 * @b: second int
 * Return: the remainder of the devision of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		puts("Error");
		exit(100);
	}
	return (a % b);
}
