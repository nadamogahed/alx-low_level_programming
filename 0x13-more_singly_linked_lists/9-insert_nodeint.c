#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: A pointer to the address of
 * the head of the listint_t list.
 * @idx: The index of the list where the new
 * node should be added. Index starts at 0.
 * @n: The integer for the new node to be added.
 *
 * Return: If it is not possible to add the new node
 * at index idx, do not add the new node and return NULL.
 * Otherwise, the address of the new node.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *temp = *head;
	unsigned int i;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (i = 0; i < idx - 1; i++)
	{
		if (temp == NULL || temp->next == NULL)
		{
			free(new);
			return (NULL);
		}
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	return (new);
}
