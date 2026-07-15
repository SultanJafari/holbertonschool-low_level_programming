#include "main.h"

/**
 * _strcpy - copies the string pointed to by src to the buffer
 * pointed to by dest
 * @dest: the destination buffer
 * @src: the source string
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	/* Copy each character until the null byte is reached */
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	/* Copy the null byte at the end */
	dest[i] = '\0';

	return (dest);
}
