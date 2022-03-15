#include "main.h"

/**
 * _isalpha - check code.
 * @c: An input characte
 * Description: a function that checks for alphabetic character.
 * Return 0 or 1.
 */
int _isalpha(int c)
{
	char lower, upper;
	int letter = 0;

	for (lower = 'a'; lower < 'z'; lower++)
	{
		for (upper = 'A'; upper < 'Z'; upper++)
		{
			if (c == lower || c == upper)
				letter = 1;
		}
	}
	return (letter);
}
