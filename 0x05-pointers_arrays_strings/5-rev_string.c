#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: character
 */

void rev_string(char *s)
{
	char tmp;
	int i, len, len1;

	len1 = 0;
	len2 = 0;

	while (s[len1] != '\0')
	{
		len1++;
	}

	len2 = len1 -1;

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len2];
		s[len2--] = tmp;
	}
}
