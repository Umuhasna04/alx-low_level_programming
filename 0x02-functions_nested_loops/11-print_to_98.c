#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: the integer
 */
void print_to_98(int n)
{
	int i = n;

	if (n <= 98)
	{
		while (i < 98)
			printf("%d, ", i++);
	}
	else
	{
		while (i > 98)
			printf("%d, ", i--);
	}

	printf("%d\n", i);
}
