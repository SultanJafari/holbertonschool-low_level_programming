#include <stdio.h>

/**
 * multiplication_table - Prints a 4x4 multiplication table.
 *
 * Return: void
 */
void multiplication_table(void)
{
	int i, j;

	for (i = 1; i <= 4; i++)
	{
		for (j = 1; j <= 4; j++)
		{
			printf("%d ", i * j);
		}
		printf("\n");
	}
}

/**
 * main - Entry point.
 *
 * Return: Always 0.
 */
int main(void)
{
	multiplication_table();
	return (0);
}
