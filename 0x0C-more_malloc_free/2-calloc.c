#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size of each element in bytes
 *
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);

	ptr = malloc(1 + nmemb * size);
	if (!ptr)
		return (NULL);

	for (i = 0; i <= (nmemb * size + 1); i++)
		ptr[i] = 0;

	return (ptr);
}
