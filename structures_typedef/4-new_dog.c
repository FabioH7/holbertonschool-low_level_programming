#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - initialise function
 * @d: struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newd;
	int i, len1, len2;
	char *cpn, *cpo;

	for (i = 0; name[i] != '\0'; i++)
	{
	}
	len1 = i;
	for (i = 0; owner[i] != '\0'; i++)
	{
	}
	len2 = i;
	newd = malloc(sizeof(dog_t));
	if (newd == NULL)
		return (NULL);
	cpn = malloc(sizeof(char) * len1 + 1);
	if (cpn == NULL)
	{
		free(newd);
	}
	cpo = malloc(sizeof(char) * len2 + 1);
	if (cpo == NULL)
	{
		free(cpo);
		free(newd);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		cpn[i] = name[i];
	}
	for (i = 0; owner[i] != '\0'; i++)
	{
		cpo[i] = name[i];
	}
	newd->name = cpn;
	newd->age = age;
	newd->owner = cpo;
	return (newd);
}
