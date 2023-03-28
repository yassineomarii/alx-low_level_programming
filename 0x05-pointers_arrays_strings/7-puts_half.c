#include "main.h"

/**
 * puts_half - Prints the second half of @str.
 * loop - loops through all indexes... :/
 *
 * @str: A string.
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	if (i % 2 != 0)
	{
		i = i - 1;
		for (i = i / 2; (str[i] != '\0'); i++)
			_putchar(str[i]);
	}
	else
	{
		for (i = i / 2; (str[i] != '\0'); i++)
			_putchar(str[i]);
	}
	_putchar('\n');
}
