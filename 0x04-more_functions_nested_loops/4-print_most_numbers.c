#include "main"

/**
 * print_most_numbers - Prints numbers from 0 to 9, but skips 2 and 4.
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i == 50 || i == 52)
			continue;
		else
			_putchar(i);
	}
	_putchar();
}
