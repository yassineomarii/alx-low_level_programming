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
	int j;

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	dest[j] = '\0';
	return (dest);
}
