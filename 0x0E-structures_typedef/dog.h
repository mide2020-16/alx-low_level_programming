#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defining a struct dog
 * @name: name of dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * init_dog - Initializtion of a dog
 * @d: dog struct
 * @name: name 
 * @age: age
 * @owner: owner
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	
	strcpy(d->name, name);
	d->age = age;
	strcpy(d->owner, owner);
}
