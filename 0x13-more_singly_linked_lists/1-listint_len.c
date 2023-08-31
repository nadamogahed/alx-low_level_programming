#include "lists.h"
/**
 * listint_len - len of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
