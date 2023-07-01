#include "lists.h"

/**
 * add_node_end - adds a new node at the
 * end of a list_t list.
 * @head: adress of first node
 * @str: data for new node
 * Return: the address of the new element
 * or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tail;
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
		free(new);
		return (NULL);
	}

	new->next = NULL;

	tail = *head;
	if (*head == NULL)
		*head = new;
	else
	{
		while (tail->next != NULL)
			tail = tail->next;

		tail->next = new;
	}

	return (*head);
}
