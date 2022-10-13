#include <stdio.h>
int is_palindrome(char *str);

int is_palindrome(char *str)
{
	int i, j, len;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	len = i;
	i = 0;
	for (j = len - 1; j > i; j--)
	{
		if (str[i] == str[j])
		{
			i++;
		}
		else
			return(0);
	}
	return(1);
}

int main()
{
	printf("%d\n", is_palindrome(""));
	return (0);
}
