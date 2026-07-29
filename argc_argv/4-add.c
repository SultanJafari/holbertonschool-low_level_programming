#include <stdio.h>
#include <stdlib.h>

/**
 * check_digit - Checks if a string represents a valid positive number
 * @str: The string to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int check_digit(char *str)
{
	int i = 0;

	if (str[0] == '\0')
		return (0);

	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * main - Adds positive numbers passed as arguments
 * @argc: The number of command line arguments
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success, 1 on error (non-digit found)
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		if (!check_digit(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
