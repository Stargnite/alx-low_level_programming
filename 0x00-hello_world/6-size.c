#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int t;
	char o;
	long long int b;
	long int i;
	float l;

	printf("Size of a char: %lu bytes(s)\n", (unsigned long)sizeof(o));
	printf("size of an int: %lu bytes(s)\n", (unsigned long)sizeof(t));
	printf("size of a long int: %lu bytes(s)\n", (unsigned long)sizeof(i));
	printf("size of a long long int: %lu bytes(s)\n", (unsigned long)sizeof(b));
	printf("size of a float: %lu bytes(s)\n", (unsigned long)sizeof(l));
	return (0);
}
