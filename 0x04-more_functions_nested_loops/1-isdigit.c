#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check description
 * @c: An input integer
 * Description: a function that checks for a digit (0 through 9).
 * Return: 1 or 0.
 */

int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= 9; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}
	return (isdigit);
}
