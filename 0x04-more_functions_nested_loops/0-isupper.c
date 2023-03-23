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
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
