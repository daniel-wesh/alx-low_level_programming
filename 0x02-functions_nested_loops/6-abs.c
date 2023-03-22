#include "main.h"
/**
 *_abs - function that computes the absolute value of an integer
 *@k: function parameter
 *
 * Return: k
 */

int _abs(int k)
{
	if (k < 0)
	{
		k = k * -1;
	}
	return (k);
}
