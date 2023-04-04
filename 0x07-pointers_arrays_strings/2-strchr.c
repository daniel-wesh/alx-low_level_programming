#include "main.h"
#include <stdio.h>
/**
 * _strchr - Returns a pointer to the first occurrence of the character c
 * @s: parameter 1
 * @c: parameter 2
 *
 * Return: char
 */

char *_strchr(char *s, char c)
{
	int n;

	for (n = 0; s[n] >= '\0'; n++)
	{
		if (s[n] == c)
			return (s + n);
	}

	return (NULL);
}
