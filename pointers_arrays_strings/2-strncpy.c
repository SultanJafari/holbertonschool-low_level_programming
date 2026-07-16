#include "main.h"

/**
 * _strncat - concatenates two strings, using at most n bytes from src.
 * @dest: the destination string.
 * @src: the source string.
 * @n: the maximum number of bytes to use from src.
 *
 * Return: a pointer to the resulting string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	/* Find the end of the dest string */
	while (dest[i] != '\0')
	{
		i++;
	}

	/* Copy at most n bytes from src */
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	/* Add the terminating null byte */
	dest[i] = '\0';

	return (dest);
}
