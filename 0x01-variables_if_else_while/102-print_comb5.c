#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: 0 (success)
 */
int main(void)
{
	int m;
	int n;

	for (m = 0; m < 100; m++)
	{
		for (n = 0; n < 100; n++)
		{
			if (m < n)
			{
				putchar((m / 10) + 48);
				putchar((m % 10) + 48);
				putchar(' ');
				putchar((n / 10) + 48);
				putchar((n % 10) + 48);
				if (m != 98 || n != 99)
				{
					putchar(',');
					putchar(' ');
					}
			}
		}
	}
	putchar('\n');
	return (0);
}
