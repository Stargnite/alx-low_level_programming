#include "main.h"

/**
 * _isupper - check code
 * @c: an input character
 * Return: 0 otherwise.
 */

int _isupper(int c)
{
	char uppercase = 'A';
	int isupper = 0;

	for (; uppercase <= 'Z'; uppercase++)
	{
		if ( c == uppercase)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}
