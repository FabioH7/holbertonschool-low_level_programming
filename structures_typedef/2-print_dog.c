#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialise function
 * @d: struct
 */
void print_dog(struct dog *d)
{
	if (d)
	{
	printf("Name: %s\n", d->name);
	printf("Name: %f\n", d->age);
	printf("Name: %s\n", d->owner);
	}
}
