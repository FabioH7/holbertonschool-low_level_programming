#include <stdio.h>
#include <string.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int intType;
	char charType;
	float floatType;
	long long int longType;
	long int smallType;
	/* sizeof returns size of variable */
	printf("Size of a char: %zu byte(s)\n", sizeof(charType));
	printf("Size of an int: %zu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(smallType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(longType));
	printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
	return (0);
}
