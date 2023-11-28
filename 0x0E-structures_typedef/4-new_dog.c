#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - The new dog struct initialzation
 * @name: nName
 * @age: Age
 * @owner: Owner
 * Return: A new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);

	}
	dog->name = malloc(sizeof(char) * strlen(name) + 1);

	if ((dog->name) == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = name;

	dog->age = age;

	dog->owner = malloc(sizeof(char) * strlen(owner) + 1);

	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	dog->owner = owner;
	return (dog);
}
