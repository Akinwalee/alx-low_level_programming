#include "main.h"

/**
 * _islower - Checks if a charcacter is in lower case
 * and prints 1 or 0 if true or false
 *
 *@c: Variable for alphabet to be checked
 *
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
