#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * print_dog - initialise function
 * @d: struct
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
