#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to concatenate to
 * @src: string to concatenate
 *
 * Return: pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i])
		i++;
	for (j = 0; src[j]; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';

	return (dest);
}
