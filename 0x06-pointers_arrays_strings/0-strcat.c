#include "main.h"

/**
 * *_strcat - a function that concatenates two strings
 * @dest: character to append to
 * @src: character being appended
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char str1[100] = "Osooluwa", str2[100] = "ALXSE";

	char str3[100];

	int i = 0, j = 0;

	printf("\nFirst string: %s", str1);
	printf("\nSecond string: %s", str2);

	while (str1[i] != '\0')
	{
		str3[j] = str1[i];
		i++;
		j++;
	}
	while (str2[i] != '\0')
	{
		str3[j] = str2[i];
		i++;
		j++;
	}
	str3[j] = '\0';

	printf("\nConcatenated string: %s", str3);

	return (0);
}
