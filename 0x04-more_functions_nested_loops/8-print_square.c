#include "main.h"
#include <stdio.h>

/**
 * print_square - Print square line dependent on the integer n.
 * @n : The number of lines using '#' characters to use per row and column
 * Return: Void.
 */
void print_square(int size)
{
    int x;
    int y;

    for (x = 0; x < size; x++)
    {
        for (y = 0; y < size; y++)
        {
            _putchar('#');
        }
        _putchar('\n');
    }
    if (size <= 0)
    {
        _putchar('\n');
    }
}
