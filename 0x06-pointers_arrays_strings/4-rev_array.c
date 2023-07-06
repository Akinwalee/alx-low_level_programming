#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 *
 * @a: The array to reverse
 * @n: The number of elements in the array
 *
 * Return: void.
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = n - 1; i >= n / 2; i--)
	{
		temp = a[n - 1 - i];
		a[n - 1 - i] = a[i];
		a[i] = temp;
	}
}
