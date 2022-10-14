#include <stdio.h>
/**
 * prints type sizes
 *
 * Returns: Always 0 (Success)
 */

 int main(void)
{
 	char myCharacter;
	int integer;
	long int longInt;
	long long int longLongInt;
	float myFloat;

	printf("Size of a char: %lu byte(s)\n", sizeof(myCharacter));
	printf("Size of a integer: %lu byte(s)\n", sizeof(integer));
	printf("Size of a long int: %lu byte(s)\n",sizeof(longInt));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(longLongInt));
	printf("Size of a float: %lu byte(s)\n", sizeof(myFloat));

	return(0);
 }
