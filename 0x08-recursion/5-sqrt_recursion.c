#include "main.h"

/**
 * _sqrt - find two iquals numbers multiplied iqual to n
 * _sqrt_recursion - function that prints a string in reverse
 * @n: integer
 * @counter: number to multiply
 * Return: nothing
 */
int _sqrt(int n, int counter)
{
	if (n == counter * counter)
	{
		return (counter);
	}
	else if (n < counter * counter)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(n, counter + 1));
	}
}
/**
 * _sqrt_recursion - natural square root
 * @n: number
 * Return: square root value
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (_sqrt(n, 1));
	}
}
