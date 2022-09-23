#include "main.h"

/**
 * _strcat - function that concatenates two strings. It will
 * use at most n bytes from src. src does not need to be null terminated.
 *
 * @dest: pointer to destination string.
 *
 * @src: pointer to the source string.
 *
 * Return: pointer to destinaton string.
 */
char *_strcat(char *dest, char *src)
{
	int length, j;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
