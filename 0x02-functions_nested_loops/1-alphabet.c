#include "main.h"

/**
 * main - check description
 * Description: a function that prints the alphabet, in lowercase, followed by a new line.
 * no return.
 */
void print_alphabet(void)
{
	char i;


	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar("\n");
}
