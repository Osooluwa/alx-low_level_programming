#include "main.h"
#include <string.h>

/**
 * print_rev - a function that prints a string
 * in reverse
 * @s: the string
 */

void print_rev(char *s)
{
	int a, b;

	b = strlen(s);
	for (b = a - 1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
}
