#include "main.h"
/**
 * more_members - Prints more numbers
 * Return: 10 times of the numbers from 0 10 14
 */
void more_members(void)
{
int x, y;
for (x = 0; x < 10; x++)
{
for (y = 0; y <= 14; y++)
{
if (y > 9)
{
_putchar((y / 10) + '0');
}
_putchar((y % 10) + '0');
}
_putchar('\n');
}
}
