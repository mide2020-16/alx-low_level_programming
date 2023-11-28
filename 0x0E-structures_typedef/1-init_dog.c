#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - The new dog initialization
 * @d: Instance of the dog
 * @name: name
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
