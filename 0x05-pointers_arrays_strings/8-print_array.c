#include <stdio.h>
#include "main.h"

/**
 * print_array - function that pints n elements of an array of
 * integers, followed by a new line.
 *
 * @n: number of elements of the array to be printed
 *
 * @a: pointer to an integer to be changed
 *
 * Return: void means success
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);

		if (i < n - 1)
		{
			printf(", ");
		}

		i++;
	}
	printf("\n");
}
