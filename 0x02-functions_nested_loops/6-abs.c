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
		return (x);
	}
	else if (x < 0)
	{
		x *= -1;
		return(x);
	}

	return (0);
}
