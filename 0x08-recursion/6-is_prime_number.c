#include "main.h"

/**
 * prime - computes the prime number
 *
 * @n: integer to check if it's prime
 * @x: integre to use as recursive iterator
 *
 * Return: Return 1 or 0 if prime or not, respectively.
 */

int prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (i > 0 && n % x == 0)
		return (0);
	return (prime(n, x - 1));
}


/**
 * is_prime_number - Determines if an integer isa prime number or not
 *
 * @n: The integer to check if it's a prime number
 *
 * Return: Return 1 if its a prime number, 0 otherwise.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}
