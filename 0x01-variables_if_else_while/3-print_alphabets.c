#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int j;
	int k;

	j = 'a';
	k = 'A';

	while (j <= 'z')
	{
		putchar(j);
		j++;
	}
	while (k <= 'Z')
	{
		putchar(k);
		k++;
	}
	putchar('\n');
	return (0);
}
