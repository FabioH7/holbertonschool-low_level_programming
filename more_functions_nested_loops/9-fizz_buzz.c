#include <stdio.h>
#include <unistd.h>
int main (void)
{
	int num;
	
	for (num = 0; num < 100; num ++)
	{
		for (num = 1; num < 101; num ++)
			printf(" ");
	printf("%d", num);
	}
	printf("\n");
}
