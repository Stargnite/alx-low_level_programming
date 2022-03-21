#include "main.h"
/** _strlen - check code
 * Description: counts number of strings and print
 * Return: output
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
