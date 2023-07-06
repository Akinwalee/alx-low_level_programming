#include "lists.h"

void __attribute__((constructor)) first(void);

/**
 * first -Prints a string before main function is executed
 *
 * Return: Void.
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
