#include <stdio.h>

/**
 * multiplication_table - Prints the multiplication table of 9.
 * @n: The number to multiply.
 *
 * Return: void
 */
void multiplication_table(int n)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
		printf("%d * %d = %d\n", n, i, n * i);
	}
}

/* -- DO NOT Modify the code below this line -- */
int main(void)
{
	multiplication_table(9);
	return (0);
}
