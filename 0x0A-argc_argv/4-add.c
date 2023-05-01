#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * check_num - check if a string contains only digits
 * @str: the string to check
 *
 * Return: 1 if the string contains only digits, 0 otherwise
 */

int check_num(const char *str)
{
    while (*str)
    {
        if (!isdigit(*str))
            return (0);
        str++;
    }
    return (1);
}

/**
 * main -Prints the sum of the numbers passed as arguments to the program
 *
 * @argc: Argc
 * @argv: Argv
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
    int sum = 0;
    int i;

    for (i = 1; i < argc; i++)
    {
        if (check_num(argv[i]))
            sum += atoi(argv[i]);
        else
        {
            printf("Error\n");
            return (1);
        }
    }
    printf("%d\n", sum);
    return (0);
}
