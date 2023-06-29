#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: string to concatenate to
 * @src: string to concatenate
 * @n: number of bytes
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i])
		i++;
	for (j = 0; j < n && src[j]; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';

	return (dest);
}
