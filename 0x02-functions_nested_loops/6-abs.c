#include "main.h"

/**
 * _abs - Prints the absolute value of its argument
 *
 * Return: Always 0 (Success)
 */

int _abs(int x)
{
	if (x > 0 || x == 0)
	{
		putchar(x);
	}
	else if (x < 0)
	{
		x *= -1;
		putchar(x);
	}

	return (0);
}
