#include "lists.h"

/**
 * delete_nodeint_at_index -  deletes the node at a given
 * index index of a list
 * @head: pointer to first node
 * @index: the given index
 * Return: 1 if success, -1 if fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;
	listint_t *node;

	if (!*head)
		return (-1);

	temp = *head;
	for (i = 0; i < index; i++)
	{
		if (!temp)
			return (-1);
		temp = temp->next;
	}

	if (!(temp->next))
		return (-1);

	node = temp->next;
	temp->next = node->next;

	free(node);

	return (1);
}
