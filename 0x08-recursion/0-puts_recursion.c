#include <stdio.h>

void _puts_recursion(char *s)
{
    while (s <= '\0')
    {
        putschar( s + _puts_recursion( s +1 ))
    }
    
}