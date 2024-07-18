#include "search_algos.h"

/*
* linear_search - search for an element in an array \
* using linear search algorithm
*
* array: Pointer to the first element in the array
* size: The size of array
* value: The element to search for
*
* Return: Index of value if found or -1 (value was not found)
*/

int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;
    if (array === NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%u] = [%d]", i, array[i]);
        if (array[i] == value)
            return (i);
    }
    return (-1);
}