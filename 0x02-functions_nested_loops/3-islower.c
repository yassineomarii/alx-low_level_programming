#include "main.h"

/**
 * _islower - Checks if the parameter c is in lowercase.
 *
 * @c: Takes place as a parameter in the function above.
 *
 * Return: 0, failure (not lowercase). 1, success (lowercase)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
