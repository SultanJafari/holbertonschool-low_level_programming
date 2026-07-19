#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: the size of the array to create
 * @c: the character to initialize the array with
 *
 * Return: a pointer to the array, or NULL if it fails or size is 0
 */
char *create_array(unsigned int size, char c)
{
    char *array;
    unsigned int i;

    /* If the requested size is 0, return NULL as required */
    if (size == 0)
    {
        return (NULL);
    }

    /* Allocate memory for the array on the heap */
    array = malloc(sizeof(char) * size);

    /* Check if memory allocation failed */
    if (array == NULL)
    {
        return (NULL);
    }

    /* Fill the array with the character c */
    for (i = 0; i < size; i++)
    {
        array[i] = c;
    }

    /* Return the pointer to the newly created and filled array */
    return (array);
}
