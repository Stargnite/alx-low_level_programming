#include <stdio.h>

/**
 *
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

	printf("Size of int: %lu bytes(s)\n", (unsigned long)sizeof(t));
	printf("size of char: %lu bytes(s)\n", (unsigned long)sizeof(o));
	printf("size of long long int: %lu bytes(s)\n", (unsigned long)sizeof(b));
	printf("size of long int: %lu bytes(s)\n", (unsigned long)sizeof(i));
	printf("size of float: %lu bytes(s)\n", (unsigned long)sizeof(l));
	return (0);
}
