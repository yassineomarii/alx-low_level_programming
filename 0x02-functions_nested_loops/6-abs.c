#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 *
 * @x: An integer.
 *
 * Return: x means it's greater than 0. x *= 0, makes it greater than 0.
 */

int _abs(int x)
{
	if (!(x >= 0))
		return (x *= -1);
	else
		return (x);
}
