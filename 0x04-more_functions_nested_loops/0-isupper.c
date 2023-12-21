#include "main.h"

/**
 * _isupper - a function that checks for uppercase character
 * @c: character to check
 * Returns: 1 if c is upper, otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
