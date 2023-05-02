#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string to a new memory location
 *
 * @str: String to duplicate.
 *
 * Return: Pointer to the new memory location.
 */

char *_strdup(char *str)
{
	char *new_str;
	int i = 0;
	int j = 0;

	if (str == NULL)
		return (NULL);

	while (str[i] != '\0')
		i++;

	new_str = malloc(sizeof(char) * (i + 1));

	if (new_str == NULL)
		return (NULL);

	for (; str[j]; j++)
		new_str[j] = str[j];

	return (new_str);
}
