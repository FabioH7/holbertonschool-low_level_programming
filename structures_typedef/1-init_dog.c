#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - initialise function
 * @d: struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
	d->name = name;
	d->age = age;
	d->owner = owner;
	}
}
