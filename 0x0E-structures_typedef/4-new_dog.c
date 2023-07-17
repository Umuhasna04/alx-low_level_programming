#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: pointer to struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1 = 0, len2 = 0;
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (!newDog)
		return (NULL);

	while (name[len1])
		len1++;

	newDog->name = malloc(sizeof(char) * (len1 + 1));
	if (!(newDog->name))
	{
		free(newDog);
		return (NULL);
	}

	while (owner[len2])
		len2++;

	newDog->owner = malloc(sizeof(char) * (len2 + 1));
	if (!(newDog->owner))
	{
		free(newDog);
		return (NULL);
	}

	newDog->name = strcpy(newDog->name, name);
	newDog->age = age;
	newDog->owner = strcpy(newDog->owner, owner);

	return (newDog);
}
