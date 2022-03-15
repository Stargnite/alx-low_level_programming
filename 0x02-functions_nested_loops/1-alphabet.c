#include "main.h"

/**
 * main - check description
 * Description: a function that prints the alphabet, in lowercase, and new line
 *
 * no return.
 */
void print_alphabet(void)
{
	char ch;

	ch ='a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}

	_putchar('\n');
}
