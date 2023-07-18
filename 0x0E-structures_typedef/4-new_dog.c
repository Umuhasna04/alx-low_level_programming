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
	char *name_cpy, *owner_cpy;
	int len1 = 0, len2 = 0;
	dog_t *newDog;

	newDog = malloc(sizeof(dog_t));
	if (!newDog)
		return (NULL);

	while (name[len1])
		len1++;

	name_cpy = malloc(sizeof(char) * (len1 + 1));
	if (!name_cpy)
	{
		free(newDog);
		return (NULL);
	}

	while (owner[len2])
		len2++;

	owner_cpy = malloc(sizeof(char) * (len2 + 1));
	if (!owner_cpy)
	{
		free(name_cpy);
		free(newDog);
		return (NULL);
	}

	strcpy(name_cpy, name);
	strcpy(owner_cpy, owner);

	newDog->name = name_cpy;
	newDog->age = age;
	newDog->owner = owner_cpy;

	return (newDog);
}
