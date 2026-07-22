#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integers.
 * @min: The minimum value (inclusive).
 * @max: The maximum value (inclusive).
 *
 * Return: Pointer to the newly created array, or NULL if it fails.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	ptr = malloc(sizeof(int) * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
