#include <stdlib.h>
#include "main.h"

/**
 * *array_range - Creates an array of integers
 *
 * @min: Minimum range of values stored
 * @max: Maximum range of values stored and number of elements
 *
 * Return: A pointer to the new array
 */

int *array_range(int min, int max)
{
	int *x;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	x = malloc(sizeof(int) * size);

	if (x == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		x[i] = min++;

	return (x);
}
