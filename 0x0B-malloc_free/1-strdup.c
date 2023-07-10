#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: the string
 *
 * Return: On success returns a pointer to the duplicated string,
 * otherwise NULL
 */
char *_strdup(char *str)
{
	int size = 0, i;
	char *dupstr;

	if (!str)
		return (NULL);

	while (str[size])
		size++;

	dupstr = malloc(sizeof(char) * size);
	if (!dupstr)
		return (NULL);

	for (i = 0; i <= size; i++)
		dupstr[i] = str[i];

	return (dupstr);
}
