#include "main.h"

/**
 * helper - Helper function for is_palindrome()
 *
 * @s: The string to check if it's palidrome
 * @i: Iterator to calculate palidrome
 * @length: Length of the string
 *
 * Return: Return 1 or 0 if palidrome or otherwise.
 */

int helper(cahr *s, int i, int length)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= length)
		return (1);
	return (helper(s, i + 1, length - 1));
}

/**
 * is_palindrome - Checks if a string is palindrome.
 *
 * @s: The string to check if it is palindrome.
 *
 * Return: Returns 1 if it is palindrome, 0 otherwise.
 */

int is_palindrome(cahr *s)
{
	if (*s == NULL)
		return (0);
	return (helper(s, 0, _strlen_recursion(s)));
}
