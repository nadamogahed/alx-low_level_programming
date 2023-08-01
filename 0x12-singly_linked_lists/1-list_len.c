#include "lists.h"
/**
 * list_len - Calculates the length of a linked list.
 * @h: A pointer to the head node of the linked list.
 * Return: The number of nodes in the linked list.
*/
size_t list_len(const list_t *h)
{
	size_t x;

	x = 0;

	while (h != NULL)
	{
		h = h->next;
		x++;
	}
	return (x);
}
