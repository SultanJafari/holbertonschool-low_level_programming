#include <stdio.h>

void function(void)
{
	int y;

	y = 20;
	printf("function: y = %d, address = %p\n", y, (void *)&y);
}

int main(void)
{
	int x;

	x = 10;
	printf("main: x = %d, address = %p\n", x, (void *)&x);
	function();

	return (0);
}
