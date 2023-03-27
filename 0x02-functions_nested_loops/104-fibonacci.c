#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	int counter = 2;

	unsigned long a = 1;
	unsigned long b = a + 1;
	unsigned long c = a + b;

	printf("%lu, ", a);
	printf("%lu, ", b);
	while (counter < 98)
	{
		counter++;
		printf("%lu", c);
		a = b;
		b = c;
		c = a + b;
		if (counter < 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}
