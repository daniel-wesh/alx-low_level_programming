#include "main.h"
/**
 * times_table - prints the time table
 *
 *
 */

void times_table(void)
{
	int k;

	for(k = 0; k <= 9; k++)
	{
		int j = 1;
		for (j = 1; j <= k; j++)
		{
			_putchar(j);
			_putchar(',');
		}
		_putchar(k);
		_putchar('\n');

	}
}
