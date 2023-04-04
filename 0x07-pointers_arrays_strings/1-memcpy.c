#include "main.h"
/**
 *_memcpy - function that copies n bytes of memory area to another
 *@dest: parameter 1
 *@src: parameter 2
 *@n: parameter 3
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	unsigned int j;

	for (j = 0; j < n; j++)
		dest[j] = src[j];
	return (p);

}
