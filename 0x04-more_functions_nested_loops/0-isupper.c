#include "main.h"

/**
 * _isupper - Checks for uppercase chars.
 *
 * @c: A character.
 *
 * Return: 1 if the character is uppercase, 0 otherwise.
 */

int _isupper(char c)
{
	int i;

	for (i = 65; i <= 90; i++)
	{
		if (c == i)
			return (1);
		else
			return (0);
	}
}
