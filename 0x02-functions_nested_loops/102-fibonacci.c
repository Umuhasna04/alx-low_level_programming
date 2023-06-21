#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int sum = 0;
	unsigned long int i = 1, j = 2, n;

	printf("%ld, %ld, ", i, j);
	for (n = 2; n < 50; n++)
	{
		sum = i + j;
		printf("%ld", sum);
		if (n < 50 - 1)
			printf(", ");
		i = j;
		j = sum;
	}
	printf("\n");

	return (0);
}
