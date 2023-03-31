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
	int i;
	char tmp;

	while (a[i++])
		n++;

	for (i = n - 1; i < n; i--)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
