#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer to the string to print
 *
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;

	/* Calculate the length of the string */
	while (s[len] != '\0')
	{
		len++;
	}

	/* Move back one step to point to the last character */
	len--;

	/* Print characters in reverse order */
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}

	/* Print a new line */
	_putchar('\n');
}
