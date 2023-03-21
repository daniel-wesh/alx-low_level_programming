#include "main.h"
/**
 * print_alphabet_x10 -function that prints the alphabets 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	char k;
	int n;

	for (n = 0; n <= 10; n++)
	{
		for (k = 'a'; k <= 'z'; k++)
		{
			_putchar(k);
		}
		_putchar('\n');
	}

}
