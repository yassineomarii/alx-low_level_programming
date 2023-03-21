#include "main.h"

/**
 * main - Prints alphabets in lowercase using _putchar.
 *
 * Return: 0 Always success.
 */

int main(void)
{
	int i;

	for (i = 97; i >= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');

	return (0);
}
