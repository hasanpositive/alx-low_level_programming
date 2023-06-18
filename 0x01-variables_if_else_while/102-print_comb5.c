#include <stdio.h>

/**
 * main - Entry point
 * description: Print all possible combinations of two digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int p = 0, q;

	while (p <= 99)
	{
		q = p;
		while (q <= 99)
		{
			if (q != p)
			{
				putchar((p / 10) + 48);
				putchar((p % 10) + 48);
				putchar(' ');
				putchar((q / 10) + 48);
				putchar((q % 10) + 48);
				if (p != 98 || q != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			q++;
		}
		p++;
	}
	putchar('\n');
	return (0);
}
