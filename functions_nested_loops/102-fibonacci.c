#include <stdio.h>
/**
 * main - main function
 * Return: returns 0 if succesful
 */
int main(void)
{
	int num, sum, times, num1;
	
	num1 = 1;
	num = 0;
	sum = num + num1;

	printf("%d, %d, ", num, num1);
	for (times = 0; times < 50; times ++)
	{
		printf("%d, ", sum);
		num = num1;
		num1 = sum;
		sum = num + num1;
	}
	printf("\n");
	return (0);
}
