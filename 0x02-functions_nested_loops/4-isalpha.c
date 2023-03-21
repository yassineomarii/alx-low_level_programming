#include "main.h"

/**
 * _isalpha - Checks if the parameter c is in uppercase.
 *
 * @c: Takes place as a parameter in the function above.
 *
 * Return: 0, failure (not uppercase). 1, success (uppercase).
 */

int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
