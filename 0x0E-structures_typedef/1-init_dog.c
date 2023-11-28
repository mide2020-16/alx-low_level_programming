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
	d = malloc(sizeof(struct dog));

	if (d == NULL)
		return (NULL);

	d->name = name;
	d->owner = owner;
	d->age = age;
}
