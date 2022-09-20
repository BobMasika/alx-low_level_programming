#include <stdio.h>
#include "main.h"

/**
 * print_rev - print a string in reverse,
 * followwed by a new line
 *
 * @s: string to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_puthchar ('\n');
}
