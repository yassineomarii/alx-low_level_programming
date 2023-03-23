#include "main.h"

/**
 * print_diagonal - Prints a diagonal line.
 *
 * @n: number of times the line should be printed.
 */

void print_line(void)
{
	int i;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}
