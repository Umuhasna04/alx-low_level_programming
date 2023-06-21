#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * in the Fibonacci sequence
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int i = 1, j = 2;
	unsigned long int sum = 0, result = 0;

	result = i + j;
	while (sum < 4000000)
	{
		sum = i + j;
		i = j;
		j = sum;
		result += sum;
	}
	printf("%ld\n", result);

	return (0);
}
