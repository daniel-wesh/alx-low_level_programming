#include "main.h"
/**
 *more_numbers - prints 10 times the numbers 0 to 14.
 *
 * Return: void.
 */

void more_numbers(void)
{
	int m;

	for (m = 0; m <= 9; m++)
	{
		int n;
		for (n = 0; n <= 14; n++)
		{
			_putchar(n + '0'); 
		}
		_putchar('\n');
	}

}
