#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 *@n: parameter
 * Return: Always 0.
 */

void print_line(int n)
{
	while (n)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
		n++;
	}

}
