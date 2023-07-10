#include "main.h"
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: the first string
 * @s2: the second string
 *
 * Return: a pointer to concatenated string or NULL
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, s1_size = 0, s2_size = 0;
	char *str_con;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";

	while (s1[s1_size])
		s1_size++;
	while (s2[s2_size])
		s2_size++;

	str_con = malloc(sizeof(char) * (s1_size + s2_size - 1));
	if (!str_con)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str_con[i] = s1[i];
	for (j = 0; s2[j]; j++, i++)
		str_con[i] = s2[j];
	str_con[i] = '\0';

	return (str_con);
}
