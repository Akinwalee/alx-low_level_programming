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
	char tmp;

	while (a[i++])
		n++;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
