#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character of a string, start with
 * the first character, followed by a new line.
 *
 * @str: pointer to the string to be printed
 *
 * Return: void
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\n'; a++)
	{
		if (a % 2 == 0)
			_putchar (str[a]);
	}

	_putchar ('\n');
}
