#include "main.h"

/**
 * reverse_array - Reverse an array with integers as its indexes.
 *
 * @a: Array.
 * @n: Number of elements in @a.
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0, i < n; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
