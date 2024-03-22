#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_dnodeint_at_index - Deletes the node at a given position
 * in a doubly linked list.
 *
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node to be deleted (starting from 0).
 *
 * Return: 1 if deletion succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *curr = *head;
	dlistint_t *temp;

	if (!head || !*head)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	while (curr)
	{
		if (count == index - 1)
		{
			temp = curr->next;
			if (temp)
			{
				curr->next = temp->next;
				if (temp->next)
					temp->next->prev = curr;
				free(temp);
				return (1);
			}
		}
		curr = curr->next;
		count++;
	}
	return (-1);
}
