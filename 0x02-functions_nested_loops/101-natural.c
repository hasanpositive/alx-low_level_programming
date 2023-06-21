#include <stdio.h>

/**
 * main - print sum of all multiples of 3 or 5 to 1024
 * Return: Always (Success)
 */
int main(void)
{
	int q, r = 0;

	while (q < 1024)
	{
		if ((q % 3 == 0) || (q % 5 == 0))
		{
			r += q;
		}
	q++;
	}
printf("%d\n", r);
return (0);
}
