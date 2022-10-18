#include "main.h"

/**
 * rev_string - main function
 * @s: param
 */
void rev_string(char *s)
{
	int i = 0;
	int len;
	char tmp;

	while (s[i] != '\0')
	{
		i++;
	}
	len = i;
	for (i = len - 1; i >= len / 2; i--)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
	}
}
