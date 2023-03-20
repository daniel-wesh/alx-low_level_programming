#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (success)
 */

int main(void)
{
	char j;
	int k;

	j = 'a';
	k = 0;
	while (k <= 9)
	{
		putchar(k + '0');
		k++;
	}
	while (j <= 'f')
	{
		putchar(j);
		j++;
	}
	putchar('\n');
	return (0);
}
