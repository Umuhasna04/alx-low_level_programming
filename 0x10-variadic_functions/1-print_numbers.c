#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	size_t i;
	va_list list;

	if (n)
	{
		va_start(list, n);

		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(list, int));

			if (i != n - 1 && separator)
				printf("%s", separator);
		}

		va_end(list);
	}
	printf("\n");
}
