#include "main.h"

/**
 * _islower - check code.
 * @c: An input character
 * Description: a code that checks for lower case characters.
 * Return: Nothing.
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
			lower = 1;
	}

	return (lower);
}

