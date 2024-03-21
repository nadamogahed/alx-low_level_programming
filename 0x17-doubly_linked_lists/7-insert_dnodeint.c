#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node
 * at a given position in a doubly linked list.
 *
 * @h: A pointer to the head of the doubly linked list.
 * @idx: The index where the new node should be added (starting from 0).
 * @n: The data value for the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *current = *h;
	dlistint_t *new_node;

	if (!h)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;

		return (new_node);
	}
	while (current)
	{
		if (count == idx - 1)
		{
			new_node->next = current->next;
			if (current->next)
				current->next->prev = new_node;
			current->next = new_node;
			new_node->prev = current;
			return (new_node);
		}
		current = current->next;
		count++;
	}

	/* If idx is out of bounds, free the new node and return NULL */
	free(new_node);
	return (NULL);
}
