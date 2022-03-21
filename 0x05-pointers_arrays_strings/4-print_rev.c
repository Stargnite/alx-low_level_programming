#include "main.h"

/**
 * print_rev - prints strint]g in reverse
 * @s: string
 * Return: nothing
 */
void prints_rev(char *s)
{
	 int i;

	i = 0;
	while (s[i] != '\0')
	{
	i++;
	}

	for (i = i - 1; i >= 0; i--)
	{
	_puchar(s[i]);
	}
	_putchar('\n');
}
