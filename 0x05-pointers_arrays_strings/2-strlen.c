#include "main.h"

/**
 * _strlen - Returns length of a string
 *
 * @s: A string.
 *
 * Return: Length of string s.
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
