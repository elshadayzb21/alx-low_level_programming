#include "main.h"
#include <stdio.h>
    /**
     * print_alphabet_x10 - printing alphabets 10 times
     */
    void print_alphabet_x10(void)
{
    int count = 0;
    char c;

    while (count <= 9)
    {
        for (c = 'a'; c <= 'z'; c++)
        {
        putchar(c);
        }
    putchar('\n');
        count++;
    }
}
