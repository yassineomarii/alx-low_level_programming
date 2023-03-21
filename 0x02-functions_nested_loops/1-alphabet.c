#include "main.h"

/**
 * main - Prints alphabets in lowercase using _putchar.
 *
 * Return: 0 Always success.
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i >= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
