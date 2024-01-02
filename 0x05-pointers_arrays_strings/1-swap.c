#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: parameter to check 1
 * @b: parameter to check 2
 */

void swap_int(int *a, int *b)
{
	int sam;

	sam = *a;
	*a = *b;
	*b = sam;
}
