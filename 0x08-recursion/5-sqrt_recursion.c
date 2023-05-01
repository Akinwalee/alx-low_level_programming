#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number
 *
 * @n: The number whose square root is to be returned.
 *
 * Return: The square root of the number.
 */

int _sqrt_recursion(int n)
{
	int i;

	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	i = _sqrt_recursion(n - 1);
	return (i + (n / i) / 2);
}
