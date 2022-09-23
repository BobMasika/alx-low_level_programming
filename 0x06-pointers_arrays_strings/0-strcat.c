#include "main.h"

/**
 * _strncat - function that concatenates two strings. It will
 * use at most n bytes from src. src does not need to be null terminated.
 *
 * @dest: pointer to destination string.
 *
 * @src: pointer to the source string.
 *
 * @n: number of bytes to be concatenated.
 *
 * @Retrun: pointer to destinaton string.
 */
chr *_strncat(char *dest, char *src, int n)
{
	int length, j;
	/* j is a counter for n bytes of src to be concatenated */
	/* length = length of destination string */

	length = 0;
	while (dest[length] != '\n')
	{
		length++;
	}
	for (j = 0; j < && src[j] != '\n'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\n';
	return (dest);
}
