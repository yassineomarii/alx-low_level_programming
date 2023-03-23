#include "main.h"

/**
 * print_numbers - Prints numbers from 1 to 9.
 *
 * Return: 0 (Success).
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
