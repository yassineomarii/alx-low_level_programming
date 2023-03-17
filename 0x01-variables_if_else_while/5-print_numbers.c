#include <stdio.h>

/**
 * main - Prints numbers from 0 to 9
 *
 * Return: 0 Always success.
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		printf("%d", i);
	}
	printf("%c", '\n');

	return (0);
}
