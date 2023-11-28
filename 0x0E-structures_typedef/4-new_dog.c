#include "dog.h"
#include <stdlib.h>

/**
 * dog_t new_dog - The new dog struct initialzation
 * @name: nName
 * @age: Age
 * @owner: Owner
 * Description: A new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog != NULL)
	{
		if (name == NULL || owner == NULL)
			return (NULL);
		else
		{
			dog->name = name;
			dog->age = age;
			dog->owner = owner;
		}
	}
	else 
	{
		free(dog);
		return (NULL);
	}
}
