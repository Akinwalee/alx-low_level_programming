#include <stdio.h>
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	int counter = 2;

	double a = 1;
	double b = a + 1;
	double c = a + b;

	printf("%f, ", a);
	printf("%f, ", b);
	while (counter < 98)
	{
		counter++;
		printf("%f", c);
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
