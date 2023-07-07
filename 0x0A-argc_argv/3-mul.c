#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array containing the program command line arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	unsigned long int x, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%ld\n", x * y);

	return (0);
}
