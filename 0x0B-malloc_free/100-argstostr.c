#include "main.h"
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: array of arguments
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int i, len = 0, idx = 0, arg_len;
	char *args = NULL;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		len += strlen(av[i]) + 1;

	args = malloc(sizeof(char) * (len + 1));
	if (!args)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		arg_len = strlen(av[i]);
		strncpy(args + idx, av[i], arg_len);
		idx += arg_len;
		args[idx] = '\n';
		idx++;
	}
	args[idx] = '\0';

	return (args);
}
