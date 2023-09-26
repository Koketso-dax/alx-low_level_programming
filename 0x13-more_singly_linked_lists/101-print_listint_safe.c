#include "lists.h"
/**
 * print_listint_safe - safely prints listint_t
 * @head: ptr to head of listint_t
 * Return: num of nodes in listont_t
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len_nodes = 0;

	while (head)
	{
		len_nodes++;
		printf("[%p] %d\n", (void *)head, head->n);

		if (head <= head->next)
		{
			printf("-> [%p] %d\n",
					(void *)head->next,
					head->next->n);
			break;
		}
		head = head->next;
	}
	return (len_nodes);
}
