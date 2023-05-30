#include <stdlib.h>
#include <stdio.h>

/**
 * this is a code for functions with nested loops 
 * 
 */

int main(void)
{
    char a[] = "_putchar";
    for (int i = 0 ; i <= sizeof(a); i++)
    {
       putchar(a[i]);
    }
    putchar('\n');
    return (0);
}