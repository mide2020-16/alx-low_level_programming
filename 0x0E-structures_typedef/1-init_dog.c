#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * init_dog - Initialization of a dog
 * @d: the struct dog
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL && name != NULL && owner != NULL)
	{
		d->name = strdup(name);
		d->owner = strdup(owner);

		if (d->name != NULL && d->owner != NULL)
		{
			d->age = age;
		}
		else
		{
			free(d->name);
			free(d->owner);

			d->name = NULL;
			d->owner = NULL;
		}
	}
}
