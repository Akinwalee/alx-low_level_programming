#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 *
 * @n: Variable for the number whose sign is to be printed
 *
 * Return: Always 0 (Success);
 */

int print_sign(int n)
{
	if (n < 0)
	{
		printf("-");
		return (-1);
	}
	else if (n > 0)
	{ 
		printf("+");
		return (+1);
	}
	else
	{
		printf("0");
		return (0);
	}

}
