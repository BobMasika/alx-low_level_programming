#include <stdio.h>
#include "main.h"

/**
 * _puts -prints a string followed ny a new line
 *
 * @str: string to be printed
 *
 * Return: nothing
 */

void _puts(char *str)
{
	char *b;
	int n;

	b = str;

	for (n = 0; b[n]; n++)
	{
		_putchar (b[n]);
	}
	_putchar('\n');
}
