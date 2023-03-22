#include "main.h"
/**
 *_isalpha - checks whether a character is in alphabet
 *@c: parameter used in this function
 *
 * Return: 1 if alpha, 0 if not.
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
