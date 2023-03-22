#include "main.h"

/**
 * times_table - Prints the multiplication table from 0 to 9
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		int j;

		for (j = 0; j <= 9; j++)
		{
			printf("%d", (i * j));
			if (j != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
