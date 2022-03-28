#include "main.h"

/**
 * *_memset - a function that fills memory with constant byte
 * @s: location to fill
 * @b: char to fill location with
 * @n: number of bytes to fill
 * Return: pointer to memory areea 's'
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (start);
}
