#include "main.h"
/**
 * _puts -  prints a sting 
 * Return: nothing
 */
void _puts(char *str)
{
	int i;

	while ( str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
