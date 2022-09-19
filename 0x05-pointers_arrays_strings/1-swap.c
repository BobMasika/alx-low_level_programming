#include <stdio.h>
#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: first integer
 *
 * @b: second integer
 *
 * Returns: nothing
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
