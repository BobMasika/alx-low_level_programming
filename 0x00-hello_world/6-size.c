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

	printf("size of int: %zu bytes\n", sizeof(intType));
	printf("size of float: %zu bytes\n", sizeof(floatType));
	printf("size of double: %zu bytes\n", sizeof(doubleType));
	printf("size of char: %zu bytes\n", sizeof(charType));
	printf("size of long: %zu bytes\n", sizeof(longType));
	printf("size of long long: %zu bytes\n", sizeof(longlongType));

	return (0);
}
