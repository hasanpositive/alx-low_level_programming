#include "main.h"
/**
 * reverse_array - Reverses the content of an array of int.
 * @a: The array of int to be reversed.
 * @n: The number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
