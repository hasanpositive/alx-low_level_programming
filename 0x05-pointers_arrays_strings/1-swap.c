#include "main.h"
#include <stdio.h>

/**
 * swap_int - Swaps the values of two integers.
 * @a: The first integer to be swapped.
 * @b: The second to be swapped.
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
/* the func that swap the value of two integers */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
