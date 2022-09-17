#include <stdio.h>
#include "main.h"

/**
 * print_square - prints square
 *
 * @size: parameter
 *
 * Return: nothing
 */

void print_square(int size)
{
	int incl1, ncl2;

	if (size > 0)
	{
		for (incl1 = 0; incl1 < size; incl1++)
		{
			for (ncl2 = 0; ncl2 < (size - 1); ncl2++)
			{
				_putchar('#');
			}

			_putchar('#');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
