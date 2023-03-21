#include "main.h"

/**
 * _isalpha - Checks if the parameter c is in the alphabet.
 *
 * @c: Takes place as a parameter in the function above.
 *
 * Return: 0, failure (not alpha). 1, success (alpha).
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
