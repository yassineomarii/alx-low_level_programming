#include "main.h"

/**
 * _strncpy - Same work as strncpy function.
 *
 * @dest: String.
 * @src: String.
 * @n: Input value.
 */

char *_strcat(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (j < n)
	{
		dest[i] = '\n';
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
