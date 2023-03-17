#include <stdio.h>

/**
 * main - Prints alphabets in lower case followed by uppercase.
 *
 * Return: 0 Always success.
 */

int main(void)
{
	int i;

	for (i = 48; i <= 102; i++)
	{
		if (!(i > 57 && i < 97))
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
