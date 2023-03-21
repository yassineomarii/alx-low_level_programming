#include "main.h"

/**
 * islower - Checks if the parameter c is in lowercase.
 *
 * Return: 0, failure (not lowercase). 1, success (lowercase)
 */

int _islower(int c)
{
	if (!(c <= 97 && c >= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
