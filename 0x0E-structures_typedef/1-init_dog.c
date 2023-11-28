#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialization of a dog
 * @d: the struct dog
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
