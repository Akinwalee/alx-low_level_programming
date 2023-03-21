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
		return (-1);
		printf("-");
	}
	else if (n > 0)
	{
		return (1); 
		printf("+");
	}
	else
	{
		return (0);
		printf("0");
	}

}
