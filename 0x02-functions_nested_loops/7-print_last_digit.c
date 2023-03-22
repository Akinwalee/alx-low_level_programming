#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - Prints the last digit of a number
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int x)
{
	_putchar(_abs(x % 10) + '0');
	return (_abs(x % 10));
}
