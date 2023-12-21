#include "main.h"
#include <stdio.h>

/**
 * _isdigit -  a function that checks for a digit (0 through 9)
 * @c: int to check
 * Return: 1 if c is a digit, otherwise 0
 */

int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
