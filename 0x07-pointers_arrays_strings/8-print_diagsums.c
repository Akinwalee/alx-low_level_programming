#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix
 *
 * @a: Array of the matrix
 * @size: The dimension of the matrix
 *
 * Return: Always 0 (Success)
 */

void _print_diagsums(int *a, int size)
{
	int x, sum, sum1;

	for (x = 0; x < size; x++)
	{
		sum = sum + a[x * size + x];
	}

	for (x = size - 1; x >= 0; x--)
	{
		sum1 += a[x * size + (size - x - 1)];
	}

	printf("%d, %d\n", sum, sum1);
}
