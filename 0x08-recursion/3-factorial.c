#include "main.h"

/**
 * factorial - function that prints a string in reverse
 * @s: pointer to string
 * Return: nothing
 */
int factorial(int n)
{
	if (n == 0 || n == 1)
	{
		return (1);
	}

	if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
