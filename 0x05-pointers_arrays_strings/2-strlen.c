#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: string pointer passed to the function
 * Return: length of string
 */

int _strlen(char *s)
{
	int len;
	for (*s != '\0'; s++;)
	{
		len += 1;
	}
	return (strlen(s));
}
