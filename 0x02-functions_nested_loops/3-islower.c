#include "main.h"
/**
 * _islower - function that checks for lowercase character.
 *
 * Return: 1 if lowercase, 0 if uppercase.
 */
/* use the ASCII table for lowercase characters */

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
