#include "main.h"

/**
 * puts_half - Prints the second half of @str. 
 *
 * @str: A string.
 */

void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	
	if (!((i % 2) != 0))
		for (i = i / 2; str[i] =! '\0')
			_putchar(str[i]);
}
