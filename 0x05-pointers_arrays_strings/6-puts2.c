#include "main.h"
/**
 * puts2 - prints characters
 * @str: string
 * Return: nothing.
 */
void puts2(char *str)
{
	int i, b;

	i = 0;
	b = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (b < i)
	{
		_putchar(str[b]);
		b += 2;
	}
	_putchar('\n');
}
