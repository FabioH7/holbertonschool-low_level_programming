#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - entry point
 * @argc: argument count
 * @argv: argument values
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strlen(argv[2]) > 1)
	{
		puts("Error");
		exit(99);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
