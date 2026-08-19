#include <stdio.h>
#include "main.h"

int main(void)
{
	ssize_t n;

	n = read_textfile("textfile_0", 100);
	printf("\n(printed: %lu)\n", n);

	return (0);
}
