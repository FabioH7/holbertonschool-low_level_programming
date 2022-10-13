#include <stdio.h>

void main()
{
	char *string = "Hello Kristi Seraj";
	int i = 6;
	
	while (i < 12)
	{
		putchar(string[i]);
		i++;
	}
	putchar('\n');
}
