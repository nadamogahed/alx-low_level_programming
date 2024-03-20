#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_dlistint - Frees a doubly linked list of dlistint_t nodes.
 *
 * @head: The head of the doubly linked list.
 *
 * Description:
 * This function frees each node in the doubly linked list pointed to by @head.
 * It traverses the list, frees the memory for each node, and updates the
 * @head pointer to point to the next node.
 *
 * Return: None
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
