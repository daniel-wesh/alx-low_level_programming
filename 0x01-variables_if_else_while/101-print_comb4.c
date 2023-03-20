#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	int ones_digit;
	int tens_digit;
	int hundreds_digit;

	ones_digit = 0;
	tens_digit = 0;
	hundreds_digit = 0;

	for (hundreds_digit = 0; hundreds_digit <= 9; hundreds_digit++)
	{
		for (tens_digit = 0; tens_digit <= 9; tens_digit++)
		{
			for (ones_digit = 0; ones_digit <= 9; ones_digit++)
			{
				if (!((ones_digit == tens_digit) || (tens_digit == hundreds_digit)
					|| (tens_digit > ones_digit)
						|| (hundreds_digit > tens_digit)))
				{
					putchar(hundreds_digit + '0');
					putchar(tens_digit + '0');
					putchar(ones_digit + '0');
					if (!(ones_digit == 9 && hundreds_digit == 7 && tens_digit == 8))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
