#include "main.h"
/**
 *print_sign - function that prints sign
 *
 *@n: parameter
 * Return: 1 if n > 0, 0 if n == 0 and -1 if n < 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{

		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
