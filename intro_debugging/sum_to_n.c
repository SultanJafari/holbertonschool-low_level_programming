#include <stdio.h>

/**
 * sum_to_n - Computes the sum of numbers from 1 to n.
 * @n: The upper limit of the sum.
 *
 * Return: The sum.
 */
int sum_to_n(int n)
{
	int i;
	int sum = 0;

	/* غيرنا الشرط ليكون i <= n لنشمل الرقم n في المجموع */
	for (i = 1; i <= n; i++)
		sum += i;

	/* غيرنا الإرجاع ليكون sum بدلاً من n */
	return (sum);
}

/* -- DO NOT Modify the code below this line -- */
int main(void)
{
	printf("%d\n", sum_to_n(10));
	return (0);
}
