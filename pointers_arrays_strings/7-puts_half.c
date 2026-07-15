#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: pointer to the string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0;
	int n;

	/* Calculate the length of the string */
	while (str[len] != '\0')
	{
		len++;
	}

	/* Calculate the starting index for the second half */
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len + 1) / 2;
	}

	/* Print the second half */
	while (n < len)
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
