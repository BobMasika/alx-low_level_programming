#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - print numbers from 0 to 9
 * except 2 and 4
 *
 * return 0
 */
void print_most_numbers(void)
{
	char n;

	for (n = 48; n < 58; n++)
	{
		if ((n == 50) || (n == 52))
		{
			continue;
		}
		_putchar(n);
	}
	putchar(10);
}
