#include "lists.h"
/**
 * add_node - Adds a new node to the beginning of a linked list.
 * @head: A pointer to a pointer to the head node of the linked list.
 * @str: A pointer to a string to be stored in the new node.
 * Return: A pointer to the newly created node, or NULL if an error occurred.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	*new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
