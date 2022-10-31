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
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\n", d->name);
	printf("Name: %f\n", d->age);
	printf("Name: %s\n", d->owner);
	}
	else
		puts("");
}
