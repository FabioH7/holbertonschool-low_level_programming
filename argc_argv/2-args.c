#include <stdio.h>
/**
 * main - main function
 * @argc: parameter number
 * @argv: all parameters
 * Return: returns 0 if true
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
