#include <stdio.h>

/**
 * main - Program that prints the result to the standard error
 *
 * Return: (1);
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",60, 1, stderr);
	return 1;
}
