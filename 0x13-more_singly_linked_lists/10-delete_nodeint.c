#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node
 * at index of a listint_t linked list.
 * @head: A pointer to the address of the
 * head of the listint_t list.
 * @index: The index of the node that should
 * be deleted. Index starts at 0.
 *
 * Return: -1 if it failed, 1 if it succeeded.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int i;

	if (copy == NULL)
		return (-1);
	if (index == 0)
	{
		*head = copy->next;
		free(copy);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (copy->next == NULL)
			return (-1);
		copy = copy->next;
	}
	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
