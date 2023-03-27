#include "main.h"

/**
 * swap_int - Swaps interges value.
 *
 * @a: Integer.
 * @b: Integer.
 */

void swap_int(int *a, int *b)
{
	int olda;

	olda = *a;
	*a = *b;
	*b = olda;
}
