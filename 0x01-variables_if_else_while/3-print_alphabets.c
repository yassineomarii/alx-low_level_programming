#include <stdio.h>

/**
 * main - Prints alphabets in lower case followed by uppercase.
 *
 * Return: 0 Always success.
 */

int main(void)
{
	char asciiChar = 65;

	while (asciiChar <= 122)
	{
		if (!(asciiChar > 90 && asciiChar < 97))
		{
			putchar(asciiChar);
		}
		asciiChar++;
	}
	putchar("\n");
	return (0);
}
