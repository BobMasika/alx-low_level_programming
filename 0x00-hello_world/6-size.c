#include <stdio.h>

/**
 * main-Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;
	long int longType;
	long long int longlongType;

	printf("size of char: %zu bytes\n", sizeof(charType));
	printf("size of int: %zu bytes\n", sizeof(intType));
	printf("size of long int: %zu bytes\n", sizeof(longType));
	printf("size of long long int: %zu bytes\n", sizeof(longlongType));
	printf("size of float: %zu bytes\n", sizeof(floatType));

	return (0);
}
