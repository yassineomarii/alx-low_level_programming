#include <stdio.h>

/**
 * main - Prints alphabets in lower case followed by uppercase.
 *
 * Return: 0 Always success.
 */

int main(void)
{
	for (int i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (int j = 65; j <= 90; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
