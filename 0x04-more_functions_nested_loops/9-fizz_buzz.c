#include "main.h"
#include <stdio.h>

/**
 * main - Fizz for multiples of 3 and Buzz for multiples of 5 FizzBuzz for both
 *
 *
 * Return: Always 0
 */
int main(void)
{
    int x;

    for( x = 1; x < 101; x++)
    {
        if (x%3 == 0)
        {
            _putchar('Fizz');
        }
        else if( x%5 == 0)
        {
            _putchar('Buzz');
        }
        else if ( x%3 && x%5 == 0)
        {
            _putchar('FizzBuzz')
        }
        else 
        {
            _putchar(x + '0');
        }
    }
}