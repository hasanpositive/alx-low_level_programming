#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * @str: the string to be treated
 * Return: void
 */
void puts2(char *str)
{
	int m;
	int n = 0;

	while (str[n] != '\0')
	{
		n++;
	}
	for (m = 0; m < n; m += 2)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
