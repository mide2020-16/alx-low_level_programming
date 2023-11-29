#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory allocated to struct dog
 * @d: dog instances
 * Return: dog
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);

}
