#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char ch;

	/* Print 0-9 */
	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	/* Print a-f */
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	return (0);
}
