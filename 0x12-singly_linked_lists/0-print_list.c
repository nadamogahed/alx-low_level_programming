#include "lists.h"
/**
 * print_list - Prints the data stored in each node.
 * @h: A pointer to the head of the singly-linked list.
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
	size_t x;

	x = 0;  /* Counter for the number of nodes in the list */
	/* Traverse the list and print the data stored in each node */
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;  /* Move to the next node */
		x++;  /* Increment the node counter */
	}
	return (x);  /* Return the number of nodes in the list */
}
