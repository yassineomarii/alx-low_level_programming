#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9 and uses ',' as a seperator.
 *
 * Return: 0 Always success.
 */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i == 57)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
