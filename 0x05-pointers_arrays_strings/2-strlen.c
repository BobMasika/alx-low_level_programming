#include <stdio.h>
#include "main.h"

/**
 * _strlen - prints the length of a string
 *
 * @s: string in question
 *
 * Return: void means success
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
