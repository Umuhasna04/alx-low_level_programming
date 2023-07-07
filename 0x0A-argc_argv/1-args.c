#include "main.h"

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array containing the program command line arguments
 *
 * Return: always 0
 */
int main(int argc, char __attribute__((unused))*argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
