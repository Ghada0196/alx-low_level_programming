#include "lists.h"

/**
 * add_node -  adds a new node at the beginning
 * @head: the pointer to the first current node
 * @str: the data for the new node
 *
 * Return: the address of the new element
 * or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len = 0;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[len])
		len++;
	new->len = len;

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new->str);
		free(new);
		return (NULL);
	}

	new->next = *head;
	*head = new;

	return (*head);
}

