#include "main.h"

/**
 * _isupper -checks if a character is uppercase or not
 * @c: character to be tested
 * Return: 1 for uppercase, 0 for otherwise
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
