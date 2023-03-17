#include <stdio.h>

/**
 * main - Prints all combination of two numbers from 0 to 99
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a, b, c, d;

	for (a = 0; a <97; a++)
	{
		for (b = a + 1; b < 98; b++)
		{
			for (c = b + 1; c < 99; c++)
			{
				for (d = c +1; d <100; d++)
				{
					putchar((a % 10) + '0');
					putchar((b % 10) + '0');
					putchar(' ');
					putchar((c % 10) + '0');
					putchar((d % 10) + '0');
					if (a == 96 && b == 97 && c == 98 && d == 99)
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
