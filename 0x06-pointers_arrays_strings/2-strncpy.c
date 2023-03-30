#include "main.h"

/**
 * _strncpy - Same work as strncpy function.
 *
 * @dest: String.
 * @src: String.
 * @n: Input value.
 * 
 * Return: @dest. 
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
