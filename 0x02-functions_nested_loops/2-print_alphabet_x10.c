#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 * in lowercase
 * followed by a new line
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char ch;
	int x;

	x = 0;

	while (x < 10)
	{
		ch = 'a';
		while (ch <= 'z');
		{
		       _putchar(ch);
		       ch++;
	       }
	       _putchar('\n');
	       i++;
	}
}
	
