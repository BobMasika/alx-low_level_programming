#include <stdio.h>
#include "main.h"

/**
 * print_triangle - print triangle
 *
 * @size: parameter of triangle
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int tri1, tri2;

	if (size > 0)
	{
		for (tri1 = 1; tri1 <= size; tri1++)
		{
			for ((tri2 = size - tri1); tri2 > 0; tri2--)
			{
				_putchar(' ');
			}
			for (tri2 = 0; tri2 < tri1; tri2++)
			{
				_putchar('#');
			}

			if (tri1 == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
