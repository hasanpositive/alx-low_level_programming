#include "main.h"
#include <stdio.h>

/**
 * print_rev - Print a string in reverse
 * @s: The string to print
 * Return: void
 */
void print_rev(char *s)
{
	int q = 0;

	while (s[q] != '\0')
	{
		q++;
	}
	for (q -= 1; q >= 0; q--)
	{
		_putchar(s[q]);
	}
	_putchar('\n');
}
