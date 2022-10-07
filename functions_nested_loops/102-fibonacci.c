#include <stdio.h>
/**
 * main - main function
 * Return: returns 0 if succesful
 */
int main(void)
{
	long int num, sum, num1;
	int times;

	num1 = 2;
	num = 1;
	sum = num + num1;

	printf("%ld, %ld, ", num, num1);
	for (times = 0; times < 48; times++)
	{
		printf("%ld", sum);
		num = num1;
		num1 = sum;
		sum = num + num1;
		if (times == 47)
			continue;
		printf(", ");
	}
	printf("\n");
	return (0);
}
