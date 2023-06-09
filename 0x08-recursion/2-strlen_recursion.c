#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: string
 *
 * Return: the length of the string.
 */
int _s int _strlen_recursion(char *s)
{
    int count = 0;
    if (*s)
    {
        count++;
        count = count + _strlen_recursion(s + 1);
    }
    return (count);
}