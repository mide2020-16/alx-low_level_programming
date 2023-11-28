#include "dog.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

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


/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    struct dog my_dog;

    init_dog(&my_dog, "Poppy", 3.5, "Bob");
    printf("My name is %s, and I am %.1f :) - Woof!\n", my_dog.name, my_dog.age);
    return (0);
}
