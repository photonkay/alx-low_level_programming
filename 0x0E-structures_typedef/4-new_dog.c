#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"
/**
 * dog_t - function to create a new dog struct
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
 * Return: new dog struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;

	if (name == NULL || owner == NULL)
		return (NULL);

	*newDog = malloc(sizeof(dog_t));
	if (newDog == NULL)
		return (NULL);

	newDog->name = strdup(name);
	newDog->owner = strdup(owner);

	if (newDog->name == NULL || newDog->owner == NULL)
	{
		free(newDog->name);
		free(newDog->owner);
		free(newDog);
		return (NULL);
	}
	newDog->age = age;
	return (newDog);
}
