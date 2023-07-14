#include "main.h"
#include <string.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated with a call to malloc
 * @old_size: size, in bytes, of the allocated space for ptr
 * @new_size: new size, in bytes of the new memory block
 *
 * Return: pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;

	if (!ptr)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	if (new_size == old_size)
		return (ptr);

	if (ptr && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size)
	{
		new_ptr = malloc(old_size + new_size);
		if (!new_ptr)
			return (NULL);

		strncpy(new_ptr, ptr, old_size);

		free(ptr);
		return (new_ptr);
	}

	return (NULL);
}
