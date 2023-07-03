#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string to be examined
 * @needle: sub-string to be searched in haystack
 *
 * Return: pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j] && haystack[i + j] == needle[j]; j++)
		{
		}

		if (needle[j] == '\0')
			return (haystack + i);
	}

	return (0);
}
