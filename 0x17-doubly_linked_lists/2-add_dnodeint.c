#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list
 * @head: A pointer to the pointer of the head of the list
 * @n: The data of the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* Allocate memory for the new node */
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	/* Check if allocation failed */
	if (new_node == NULL)
		return (NULL);

	/* Assign the data and pointers of the new node */
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	/* If the list is not empty, update the prev pointer of the first node */
	if (*head != NULL)
		(*head)->prev = new_node;

	/* Make the new node the head of the list */
	*head = new_node;

	/* Return the address of the new node */
	return (new_node);
}

