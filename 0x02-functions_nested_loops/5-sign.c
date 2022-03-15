#include "main.h"

/**
 * print_sign - check code.
 * @n: An input number
 * Description: Tohis function prints the sign of the number
 * Return: 0 or 1.
 */
int print_sign(int n)
{
	int value;
	
	if (n > 0)
	{
		value = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		value = 0;
		_putchar('0');
	}
	else
	{
		value = -1;
		_putchar('-');
	}
	
	return (value);
}
