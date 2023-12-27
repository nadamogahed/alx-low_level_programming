#include "lists.h"
#include <stdio.h>
/**
 * dlistint_len - number of all the elements of a dlistint_t list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
