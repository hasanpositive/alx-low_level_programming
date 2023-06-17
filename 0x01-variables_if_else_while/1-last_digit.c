#include <stdio.h>

/**
* main - prints the last digit of a randomly generated number and whether it is greater than 5, less than 6, or 0.
*
* Return Always 0 (Success)
*/
int main(void)
{
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}
