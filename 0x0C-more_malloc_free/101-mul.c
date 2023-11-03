#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * main - program that multiplies two positive numbers
 * argc: argument count
 * argv: argument vector
 *
 * Return: always 0
 */
int main(int argc, char **argv)
{
	unsigned long int num1, num2;
	int i;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; argv[1][i]; i++)
	{
		if (argv[1][i] < '0' || argv[1][i] > '9')
		{
			printf("Error\n");
			exit(98);
		}
	}
	for (i = 0; argv[2][i]; i++)
	{
		if (argv[2][i] < '0' || argv[2][i] > '9')
		{
			printf("Error\n");
			exit(98);
		}
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	printf("%ld\n", num1 * num2);

	return (0);
}
