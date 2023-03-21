#include "main.h"

/**
 * print_alphabet_x10 - Prints alphabets 10 times.
 */

void print_alphabet_x10(void)
{
	int i,j;

	while (i <= 10)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
