#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	size_t i;
	va_list list;

	if (n)
	{
		va_start(list, n);

		for (i = 0; i < n; i++)
		{
			str = va_arg(list, char *);
			if (str)
				printf("%s", str);
			else
				printf("(nil)");

			if (i != n - 1 && separator)
				printf("%s", separator);
		}

		va_end(list);
	}
	printf("\n");
}
