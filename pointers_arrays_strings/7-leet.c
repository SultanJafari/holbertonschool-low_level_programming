#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: the string to encode.
 *
 * Return: a pointer to the encoded string.
 */
char *leet(char *s)
{
	int i, j;
	char *letters = "aAeEtToOlL";
	char *nums = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = nums[j];
				break;
			}
		}
	}

	return (s);
}
