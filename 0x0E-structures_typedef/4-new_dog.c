#include "dog.h"
#include <stdlib.h>
#include <string.h>

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

	int name_len;
	int owner_len;

	name_len = strlen(name);
	owner_len = strlen(owner);

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);

	}
	dog->name = malloc(sizeof(char) * name_len + 1);

	if ((dog->name) == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	dog->name = name;

	dog->age = age;

	dog->owner = malloc(sizeof(char) * owner_len + 1);

	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	dog->owner = owner;
	return (dog);
}
