#include <stdio.h>

/**
 * main - Prints alphabets in lower case.
 *
 * Return: 0 Always success.
 */

int main(void)
{
	char asciiChar = 97;

	while (asciiChar <= 122)
	{
		putchar(asciiChar);
		asciiChar++;
	}
	putchar('\n');
	return (0);
}
