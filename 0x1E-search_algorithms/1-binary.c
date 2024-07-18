#include "search_algos.h"

/**
 * print_arr - Print the elements of an array in a line
 *
 * @array: The array to print
 * @start: The start index of the array
 * @end: The last index of the array
 *
 * Return: Nothing
 */

void print_arr(int *array, size_t start, size_t end)
{
	size_t i = 0;

	printf("Searching in array: ");
	for (i = start; i <= end; i++)
	{
		if (i > start)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - Search for an element in an array \
 * using binaary search algorithm
 *
 * @array: The array to search from
 * @size: The saize of array
 * @value: the value to search for
 *
 * Return: Index of value (if found) or -1 (If not found)
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid = 0;
	size_t start = 0;
	size_t end = size - 1;

	if (array == NULL)
		return (-1);

	while (start <= end)
	{
		print_arr(array, start, end);

		mid = start + (end - start) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			start = mid + 1;
		else
			end = mid - 1;
	}

	return (-1);

}
