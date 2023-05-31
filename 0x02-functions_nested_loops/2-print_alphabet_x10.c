#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
   char c;

   for(int i  = 0; i < 10 ; i++)
    {
        for (c = 'a'; c <= "z"; c++)
        {
            putchar(c);
        }
        putchar('\n');
    }
    return (0);
}