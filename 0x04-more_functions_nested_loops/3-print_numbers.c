#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Print numbers between 0 to 9 incl.
 *
 * Return: Void.
 */
void print_numbers(void)
{
    int c;
    for (c = 0; c <= 9; c++;)
    {
        if(c != 2 && c !=4)
        _putchar(c + '0');
    }
    _putchar('\n');
}