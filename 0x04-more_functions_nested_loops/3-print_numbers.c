#include "main.h"

/**
 * print_numbers - check code
 * Return: Always 0.
 * Description: a function that prints the numbers, from 0 to 9, followed by a new line.
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
