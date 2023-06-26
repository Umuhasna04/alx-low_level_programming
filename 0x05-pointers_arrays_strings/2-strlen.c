#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the string
 *
 * Return: length of a string
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count])
		count++;

	return (count);
}
