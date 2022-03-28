#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @dest: stores bytes
 * @src: first storage of bytes
 * @n: an unsigned int
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int *memory = dest;

	while (n--)
	{
		*dest = *src;

		src++;
		dest++;
	}return (memory);
}
