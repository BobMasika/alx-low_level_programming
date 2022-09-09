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

	printf("size of char: %zu byte(s)\n", sizeof(charType));
	printf("size of int: %zu byte(s)\n", sizeof(intType));
	printf("size of long int: %zu byte(s)\n", sizeof(longType));
	printf("size of long long int: %zu byte(s)\n", sizeof(longlongType));
	printf("size of float: %zu byte(s)\n", sizeof(floatType));

	return (0);
}
