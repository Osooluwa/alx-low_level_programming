#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point, prints exactly "and that piece of art is useful"
 *
 * Return: Always 1 (Success)
 *
 * Dora Korpar, 2015-10-19
 *
 * followed by a new line to the standard error
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
