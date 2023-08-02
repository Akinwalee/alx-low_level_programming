#include "main.h"

/**
 * helper - Hlper function for square root
 *
 * @n: The number whose square root is to be found
 * @guess: the babylonian guess
 *
 * Return: The square root of n
 */

int helper(int n, int guess)
{
	int i = (guess + n / guess) / 2;

	if (i == guess)
	{
		return (guess);
	}
	else
	{
		return (helper(n, i));
	}
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 *
 * @n: The number whose square root is to be returned.
 *
 * Return: The square root of the number.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	return (helper(n, n / 2));
}
