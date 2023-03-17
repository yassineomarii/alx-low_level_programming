#include <stdio.h>

/**
 * main - Prints alphabets in lower case followed by uppercase.
 *
 * Return: 0 Always success.
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (!(i == 101 || i == 113))
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
