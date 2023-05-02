#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - Prints a string followed by a new line
 *
 * @separator: The seperating character
 * @n: Number of arguments
 *
 * Return: Void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list stringArgs;
	char *strArg;

	va_start(stringArgs, n);
	for (i = 0; i < n; i++)
	{
		strArg = va_arg(stringArgs, char *);

		if (separator != NULL && i > 0)
			printf("%s", separator);
		if (strArg == NULL)
			printf("(nil)");
		else
			printf("%s", strArg);
	}

	va_end(stringArgs);
	printf("\n");
}
