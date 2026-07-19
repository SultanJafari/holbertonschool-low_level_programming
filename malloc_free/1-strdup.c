#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL
 * or if memory allocation fails.
 */
char *_strdup(char *str)
{
	char *dup;
	unsigned int i, len;

	if (str == NULL)
		return (NULL);

	/* حساب طول السلسلة */
	for (len = 0; str[len] != '\0'; len++)
		;

	/* تخصيص الذاكرة (الطول + 1 للـ null terminator) */
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	/* نسخ السلسلة */
	for (i = 0; i <= len; i++)
		dup[i] = str[i];

	return (dup);
}
