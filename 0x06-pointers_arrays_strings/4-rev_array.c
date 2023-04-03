#include "main.h"

/**
 * reverse_array - Reverses an array of integers
 *
 * @a: The array to reverse
 * @n: The number of elements in the array
 *
 * Return: void.
 */

void reverse_array(char *a, int n)
{
	int i, j;
	char temp[n];

	for (i = n - 1; i >= 0; i--)
		temp[n - 1 - i] = a[i];
	a = temp;
}
