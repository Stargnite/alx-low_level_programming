#include "main.h"

/**
 * _pow_recursion - function that prints a string in reverse
 * @x: integer
 * @y: power
 * Return: nothing
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
