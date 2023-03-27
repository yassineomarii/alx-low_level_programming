#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 *
 * @s: A string.
 */

void print_rev(char *s)
{
	int lastIndex;

	for (lastIndex = 0; s[lastIndex] != '\0'; lastIndex++)
		;
	for (lastIndex = lastIndex - 1; s[lastindex] != '\0'; lastIndex--)
		_putchar(s[lastIndex]);
	_putchar('\n');
}
