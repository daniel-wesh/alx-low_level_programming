#include "main.h"
/**
 *print_last_digit - prints the last digit of a number
 *@x: parameter
 *
 * Return: y
 */

int print_last_digit(int x)
{
	int y;

	y = x % 10;
	if (x < 0)
		y = -y;
	return (y);
}