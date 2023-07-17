#ifndef DOG_H_
#define DOG_H_

/**
 * struct dog - struct to store info about dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 *
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#endif
