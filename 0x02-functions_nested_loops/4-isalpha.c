#include "main.h"

/**
 *_isalpha - Checks if a character is an alphabet
 *
 * @c: Variable for the character to be checked
 *
 * Return: Always 0 (Success)
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 91) || (c >= 'a' && c<= 'z'))
		return (1);

	return (0);
}
