#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - initialise function
 * @name: struct
 * @age: dog age
 * @owner: dog owner name
 * Return: pointer
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
		return (NULL);
	}
	newd->owner = malloc(sizeof(char) * len2 + 1);
	if (newd->owner == NULL)
	{
		free(newd->name);
		free(newd);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		newd->name[i] = name[i];
	}
	newd->name[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
	{
		newd->owner[i] = owner[i];
	}
	newd->owner[i] = '\0';
	newd->age = age;
	return (newd);
}
