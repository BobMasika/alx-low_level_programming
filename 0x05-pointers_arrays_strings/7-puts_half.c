#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints second half of the string
 *
 * @str: string to be printed
 *
 * Return: void means success
 */

void puts_half(char *str)
{
	int i, last;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	last = (i + 1) / 2;

	for (i = last; str[i]; i++)
	{
		_putchar (str[i]);
	}

	_putchar ('\n');
}
