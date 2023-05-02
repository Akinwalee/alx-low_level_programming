#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - computes a 2D array
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: A pointer to the 2D array
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		arr[x] = malloc(sizeof(int) * width);

		if (arr[x] == NULL)
		{
			for (; x >= 0; x--)
				free(arr[x]);

			free(arr);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			arr[x][y] = 0;
	}

	return (arr);
}
