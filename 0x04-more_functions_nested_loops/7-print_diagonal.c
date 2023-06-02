#include "main.h"
#include <stdio.h>

/**
 * print_square - Print square line dependent on the integer n.
 * @n : The number of lines using '#' characters to use per row and column
 * Return: Void.
 */
void print_square(int n)
{
    int i;
    int spaces;

    for (i = 0; i < n; i++)
    {
        for (spaces = 0; spaces < i; spaces++)
        {
            _putchar(' ');
        }
        _putchar('\\');
        _putchar('\n');
    }

    if (n <= 0)
    {
        _putchar('\n');
    }
}