#include "main.h"

/**
 * _isdigit - check description
 * @c: An input integer
 * Return: 1 or 0.
 */

int _isdigit(int c)
{
	char i = '0';
	int isdigit = 0;

	for (; i <= '9'; i++)
	{
		if (i == c)
		{
			isdigit = 1;
			break;
		}
	}

	return (isdigit);
}
