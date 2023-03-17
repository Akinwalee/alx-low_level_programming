#include <stdio.h>

/**
 * main - Prints all combination of two numbers from 0 to 99
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, c, d;

	for (a = 0; a < 10; a++)
	{
		for (b = a; b < 10; b++)
		{
			for (c = b; c < 10; c++)
			{
				for (d = c; d < 10; d++)
				{
					putchar((a % 10) + '0');
					putchar((b % 10) + '0');
					putchar(' ');
					putchar((c % 10) + '0');
					putchar((d % 10) + '0');
					if (a == 9 && b == 9 && c == 9 && d == 9)
						continue;
		
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
