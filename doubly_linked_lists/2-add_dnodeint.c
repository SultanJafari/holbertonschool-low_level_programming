#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: pointer to the head of the list
 * @n: integer to store in the new node
 *
 * Return: address of the new node, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	/* Allocate memory for the new node. */
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	/* Store the given integer in the new node. */
	new->n = n;

	/*
	 * The new node becomes the first node,
	 * so it has no previous node.
	 */
	new->prev = NULL;

	/*
	 * The old head becomes the next node
	 * after the new node.
	 */
	new->next = *head;

	/*
	 * If the list is not empty, update the old head
	 * so its previous pointer points to the new node.
	 */
	if (*head != NULL)
		(*head)->prev = new;

	/* Update the head to point to the new node. */
	*head = new;

	return (new);
}
