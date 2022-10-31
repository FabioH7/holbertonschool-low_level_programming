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
	newd->name = malloc(sizeof(char) * len1 + 1);
	if (newd->name == NULL)
	{
		free(newd);
	}
	newd->owner = malloc(sizeof(char) * len2 + 1);
	if (newd->owner == NULL)
	{
		free(newd->name);
		free(newd);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		newd->name[i] = name[i];
	}
	for (i = 0; owner[i] != '\0'; i++)
	{
		newd->owner[i] = owner[i];
	}
	newd->age = age;
	return (newd);
}
