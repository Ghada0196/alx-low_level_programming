#include "lists.h"

/**
 * listint_len - returns the number of elements
 * @h: first node in the list
 *
 * Return: a number
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
