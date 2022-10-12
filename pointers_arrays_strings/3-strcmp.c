#include "main.h"

/**
 * _strcmp - main function
 * Return: returns sum
 * @s1: param
 * @s2: destination param
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s2[i] != '\0' || s1[i] != '\0'; i++)
	{
		if (s1[0] > s2[0])
			return (s1[0] - s2[0]);
		else if (s1[0] < s2[0])
			return (s1[0] - s2[0]);
	}
	return (0);
}
