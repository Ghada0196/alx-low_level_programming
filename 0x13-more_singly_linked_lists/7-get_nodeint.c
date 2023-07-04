#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: first node
 * @index: the index
 * Return: a node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	node = head;

	for (i = 0; i < index; i++)
	{
		node = node->next;
	}

	if (!node)
		return (NULL);

	return (node);
}
