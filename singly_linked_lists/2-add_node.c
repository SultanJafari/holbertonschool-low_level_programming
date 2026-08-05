#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: address of the head of the list
 * @str: string to be duplicated
 *
 * Return: address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len] != '\0')
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = malloc(sizeof(char) * (len + 1));
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	while (len > 0)
	{
		len--;
		new_node->str[len] = str[len];
	}

	new_node->str[0] = str[0];
	new_node->len = 0;

	while (new_node->str[new_node->len] != '\0')
		new_node->len++;

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
