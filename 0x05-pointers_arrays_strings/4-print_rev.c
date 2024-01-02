#include "main.h"

/**
 * print_rev - a function that prints a string
 * in reverse
 * @s: the string
 */

void print_rev(char *s)
{
	int a, b;

	a = strlen(s);
	for (b = a - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
}
