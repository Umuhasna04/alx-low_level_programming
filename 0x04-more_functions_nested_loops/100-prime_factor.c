#include "stdio.h"

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int n = 612852475143;
	unsigned long int factor = 2, larger_factor = 0;

	while (n > 1)
	{
		if (n % factor == 0)
		{
			while (n % factor == 0)
				n = n / factor;
			larger_factor = factor;
		}
		else
			factor++;
	}
	printf("%ld\n", larger_factor);

	return (0);
}
