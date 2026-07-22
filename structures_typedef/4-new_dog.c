#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Returns the length of a string.
 * @s: String to evaluate.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - Copies the string pointed to by src
 *           including the terminating null byte (\0)
 *           to the buffer pointed to by dest.
 * @dest: Pointer to the buffer in which we copy the string.
 * @src: String to be copied.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the new dog struct, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	int name_len, owner_len;

	if (name == NULL || owner == NULL)
		return (NULL);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	name_len = _strlen(name);
	ndog->name = malloc(sizeof(char) * (name_len + 1));
	if (ndog->name == NULL)
	{
		free(ndog);
		return (NULL);
	}

	owner_len = _strlen(owner);
	ndog->owner = malloc(sizeof(char) * (owner_len + 1));
	if (ndog->owner == NULL)
	{
		free(ndog->name);
		free(ndog);
		return (NULL);
	}

	_strcpy(ndog->name, name);
	ndog->age = age;
	_strcpy(ndog->owner, owner);

	return (ndog);
}
