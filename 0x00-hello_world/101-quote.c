#include <unistd.h>
#include <stdio.h>

/**
 * main - prints exactly and that piece of art is useful\" - Dora Korpar,
 * 2015-10-19, followed by a new line, to the standard error
 *
 * Return: 0
 */
int main(void)
{
	write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
