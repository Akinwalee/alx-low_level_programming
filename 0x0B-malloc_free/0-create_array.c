#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of char
 *
 * @size: Variable for size of the array
 * @c: The char to initialize the array to
 *
 * Return: The pointer to the created array or NULL if array is empty.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);
	for (; size > i; i++)
		arr[i] = c;

	if (size == 0 || arr == NULL)
		return (NULL);

	return (arr);
}
