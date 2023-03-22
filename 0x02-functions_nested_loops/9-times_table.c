#include "main.h"

/**
 * times_table - Prints the multiplication table from 0 to 9
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int product = j * i;

			if (j == 0)
			{
				_putchar('0');
			} else if (product <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(product + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
			/*	_putchar(prod / 10 + '0');*/
				_putchar(product + '0');
			}
		}
		_putchar('\n');
	}
}
