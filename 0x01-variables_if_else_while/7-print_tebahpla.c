#include <stdio.h>

/**
 * main - print all single digit numbers starting from 0
 *
 * Return: 0 (Success)
 */

int main(void)
{
	char n;

	for (n = 'z'; n >= 'a' ; n--)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
