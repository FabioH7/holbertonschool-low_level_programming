#include "main.h"

/**
 * string_toupper - main function
 * Return: returns sum
 * @string: param
 */
char *cap_string(char *string)
{
	int i = 0;

	if (string[i] >= 'a' && string[i <= 'b'])
		string[i] -= 32;
	for (i = 0; string[i] < '\n'; i++)
	{
		if (string[i] == ' ' || string[i] == ',' || string[i] == ';' || string[i] == '.' || string[i] == '!' || string[i] == '\n' || string[i] == '\t' || string[i] == '?' || string[i] == '"' || string[i] == '(' || string[i] == ')' || string[i] == '{' || string[i] == '}')
		{
			i++;
			if (string[i] >= 'a' && string[i <= 'b'])
				string[i] -= 32;
		}
	}
	return (string);
}
