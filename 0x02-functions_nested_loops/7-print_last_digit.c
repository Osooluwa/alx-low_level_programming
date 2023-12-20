#include "main.h"

/**
 * print_last_digit -  a function that prints the last digit of a number
 * @x: int to check
 * Return: Always 0
 */

int print_last_digit(int x)
{
	int y;

	y = x % 10;

	if (y < 0)
	{
		y = y * -1;
	}
	_putchar('0' + y);
	return (y);
}
