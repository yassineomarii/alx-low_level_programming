#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9
 *
 * Return: 0 Always success.
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 0)
			continue;
		putchar(',');
		putchar(' ');
	}

	return (0);
}
