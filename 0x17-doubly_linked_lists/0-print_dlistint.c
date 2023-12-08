#include "lists.h"

/**
 * print_dlistint - prints all elements of a doubly linked list
 *
 * @h: start of doubly linked list
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int numNodes = 0;
	const dlistint_t *cur = h;

	if (cur == NULL)
		return (0);

	while (cur != NULL)
	{
		printf("%d\n", cur->n);
		cur = cur->next;
		numNodes++;
	}
	return (numNodes);
}
