#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		/* Skip 'e' and 'q' */
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}

	/* Second putchar for new line */
	putchar('\n');

	return (0);
}
