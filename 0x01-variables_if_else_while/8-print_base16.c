#include <stdio.h>

/**
 * main - Entry point
 * description: print numbers between 0 and 9 and letters between a and f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 97; i < 101; i++)
	{
		putchar('\n');
	}
	return (0);
}
