#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - The new dog struct initialzation
 * @name: Name
 * @age: Age
 * @owner: Owner
 * Return: A new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int name_len;
	int owner_len;

	name_len = strlen(name) * sizeof(char) + 1;
	owner_len = strlen(owner) * sizeof(char) + 1;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
	{
		free(dog);
		return (NULL);

	}
	dog->name = malloc(name_len);

	if ((dog->name) == NULL)
	{
		free(dog);
		return (NULL);
	}
	strcpy(dog->name, name);

	dog->age = age;

	dog->owner = malloc(owner_len);

	if (dog->owner == NULL)
	{
		free(dog->owner);
		free(dog);
		return (NULL);
	}
	strcpy(dog->owner = owner);
	return (dog);
}
