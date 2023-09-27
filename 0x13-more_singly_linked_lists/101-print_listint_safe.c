#include "lists.h"
/**
 * print_listint_safe - safely prints listint_t
 * @head: ptr to head of listint_t
 * Return: num of nodes in listont_t
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len_nodes = 0;
	const listint_t *curr = head;
	const listint_t *next;

	if (head == NULL)
	{
		return (0);
	}

	while (curr)
	{
		len_nodes++;
		printf("[%p] %d\n", (void *)curr, curr->n);
		next = curr->next;
		if (next && next >= curr)
		{
			printf("-> [%p] %d\n",
					(void *)next,
					next->n);
			break;
		}

		curr = next;
	}
	return (len_nodes);
}
