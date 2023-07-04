#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to first node
 * @idx: index
 * @n: data of new node
 * Return: adress of nex node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp;
	listint_t *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));

	if (!new || !head)
		return (NULL);

	new->n = n;
	temp = *head;

	for (i = 0; i < idx - 1; i++)
	{
		temp = temp->next;
	}

	if (!temp)
		return (NULL);

	new->next = temp->next;

	temp->next = new;

	return (new);
}
