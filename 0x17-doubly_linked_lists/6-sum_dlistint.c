#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_dlistint - Returns the sum of all
 * the data (n) of a dlistint_t linked list.
 *
 * @head: The head of the doubly linked list.
 *
 * Description:
 * This function calculates the sum of
 * all the data values (n) in the doubly
 * linked list pointed to by @head. It traverses
 * the list, adding up the data values of each node.
 *
 * Return: The sum of all data values (n) in the linked list.
 * If the list is empty, returns 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;
	dlistint_t *current = head;

	while (current)
	{
		result += current->n;
		current = current->next;
	}

	return (result);
}
