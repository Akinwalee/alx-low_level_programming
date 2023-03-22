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
		_putchar(x);
	}
	else if (x < 0)
	{
		x *= -1;
		_putchar(x);
	}

	return (0);
}
