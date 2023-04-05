#include "main.h"
/**
 * _strspn - returns the number of bytes in the initial segment of s
 * @s: parameter 1
 * @accept: parameter 2
 *
 * Return: number of bytes in the initial segment s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
			if (*s == accept[k])
			{
				n++;
				break;
			}
			else if (accept[k + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
