#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: the string to convert
 *
 * Return: the integer value
 */
int _atoi(char *s)
{
	int i = 0, sign = 1;
	unsigned int res = 0;

	/* Handle signs and find the first number */
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	/* Convert string to integer */
	while (s[i] != '\0' && s[i] >= '0' && s[i] <= '9')
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}

	return (res * sign);
}
