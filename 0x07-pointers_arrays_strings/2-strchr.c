#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * @s: a char pointer
 * @c:a char
 * Return: a pointer to the first occurence
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
			return (s);
	s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
