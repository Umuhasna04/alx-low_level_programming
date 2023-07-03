#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: the string
 * @c: character to be searched in the string
 *
 * Return: pointer to the first occurrence of the character c in the string
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}

	return (NULL);
}
