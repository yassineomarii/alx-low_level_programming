#include <stdio.h>

/**
 * main - Prints alphabets in lower case followed by uppercase.
 *
 * Return: 0 Always success.
 */

int main(void)
{
	int i, j;

	for (i = 0; i <= 122; i++)
	{
		putchar(i);
	}
	for (j = 0; j <= 90; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
