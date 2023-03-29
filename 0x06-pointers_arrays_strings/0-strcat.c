#include "main.h"

/**
 * _strcat - Appends the @src string to the @dest.
 *
 * @dest: String.
 * @src: String.
 *
 * Return: A pointer to the resulting string @dest.
 */

char *_strcat(char *dest, char *src)
{
	int j, i;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
		dest[i] = src[j];
		i++
	dest[i] = '\0';
	return (dest);
}
