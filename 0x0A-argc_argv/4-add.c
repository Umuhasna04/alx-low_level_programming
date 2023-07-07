#include "main.h"

/**
 * main - adds positive numbers
 * @argc: number of arguments
 * @argv: array containing the program command line arguments
 *
 * Return: always 0
*/
int main(int argc, char *argv[])
{
	unsigned long int sum = 0;
	int i, j;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j]; j++)
			{
				if (argv[i][j] >= '0' && argv[i][j] <= '9')
					continue;

				printf("Error\n");
				return (1);
			}

		}

		for (i = 0; i < argc; i++)
			sum += atoi(argv[i]);

		printf("%ld\n", sum);
	}

	return (0);
}
