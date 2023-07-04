#include "lists.h"

/**
 * print_listint_safe - prints all the elements of a list
 * @head: head element
 * Return: the number of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	int count = 0;
	const listint_t *temp;

	if (!head)
		exit (98);

	temp = malloc(sizeof(listint_t));
	if (!temp)
		exit (98);

	temp = head;
	while (head->next != temp)
	{
		count++;
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	return (count);
}
