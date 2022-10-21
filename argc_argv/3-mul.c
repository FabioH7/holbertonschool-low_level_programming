#include <stdio.h>
#include <stdlib.h>
/**
 * main - main function
 * @argc: parameter number
 * @argv: all parameters
 * Return: returns 0 if true
 */
int main(int argc, char *argv[])
{
	int x, y, sum;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	sum = x * y;
		printf("%d\n", sum);
	return (0);
}
