#include "main.h"

/**
 * main - prints the minimum number of coins to make change for
 * an amount of money
 * @argc: number of arguments
 * @argv: array containing the program command line arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int cents;
	int count = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
		printf("0\n");
	else
	{
		count += cents / 25;
		cents %= 25;

		count += cents / 10;
		cents %= 10;

		count += cents / 5;
		cents %= 5;

		count += cents / 2;
		cents %= 2;

		count += cents;

		printf("%d\n", count);
	}

	return (0);
}
