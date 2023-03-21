#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 *
 * @n: Takes place as a parameter in the function described above.
 *
 * Return: 1 n is greater than 0, 0 n is equal to 0, -1 n is less than 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
