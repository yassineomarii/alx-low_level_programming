#include "main.h"

/**
 * _isdigit - Checks if @c is a digit.
 *
 * @c: A digit.
 *
 * Return: 1 Checks if @c is digit, 0 otherwise.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
