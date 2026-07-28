#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything based on format
 * @format: a list of types of arguments passed to the function
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *str;
	char *separator = "";

	va_start(args, format);

	while (format && format[i])
	{
		j = 0;
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s%s", separator, str);
				break;
			default:
				j = 1;
				break;
		}
		if (j == 0)
			separator = ", ";
		i++;
	}

	va_end(args);
	printf("\n");
}
