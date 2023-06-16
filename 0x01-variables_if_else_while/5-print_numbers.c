#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 * followed by a new line
 *
 * Return: 0
 */
int main(void)
{
	int digit;

	digit = 0;
	while (digit <= 9)
	{
		printf("%d", digit);
		digit++;
	}
	putchar('\n');

	return (0);
}
