#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 *
 * @s1: First string to comcatenate
 * @s2: Second string to concatenate
 *
 * Return: The concatenated string.
 */

char *str_concat(char *s1, char *s2)
{
	char *new_str;
	int i, j;

	i = j = 0;

	s1 = (s1 == NULL) ? "" : s1;
	s2 = (s2 == NULL) ? "" : s2;

	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;

	new_str = malloc(sizeof(char) * (i + j + 1));

	if (new_str == NULL)
		return (NULL);
	i = j = 0;
	while (s1[i] != '\0')
	{
		new_str[i] = s1[i];
		i++;
	}

	while (s2[j] != '\0')
	{
		new_str[i] = s2[j];
		i++, j++;
	}
	new_str[i] = '\0';

	return (new_str);
}
