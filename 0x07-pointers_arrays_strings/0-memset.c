#include "main.h"

/**
 * _memtest - Fills memory with a contant byte.
 *
 * @s: A pointer.
 * @b: A character.
 * @n: Number of bytes (integer).
 *
 * Return: A pointer to the memory area @s.
 */

char *_memtest(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *mem = s, value = b;

	for (i = 0; i < n; i++)
		mem[i] = value;
	return (mem);
}
