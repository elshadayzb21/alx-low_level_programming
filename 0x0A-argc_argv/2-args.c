#include <stdio.h>

/**
 * main - Prints the program name, followed by a new line.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always o.
 */

int main(int argc, char * argv[])
{
    for (int i = 0; i <= argc-1; i++)
    {
        printf("%s\n", argv[i]);
    }
    
    return (0);
}