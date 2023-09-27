#include "lists.h"
/**
 * print_listint_safe - safely prints listint_t
 * @head: ptr to head of listint_t
 * Return: num of nodes in listont_t
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t len_nodes = 0;
	int loop = 1;
	listint_t *node = NULL;
	listint_t *slow = (listint_t *)head;
	listint_t *fast = (listint_t *)head;

	if (head == NULL)
	{
		exit(98);
	}

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{
			node = slow;
			break;
		}
	}
	while ((head != node || loop) && head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);

		if (head == node)
		{
			loop = 0;
		}
		head = head->next;
		len_nodes++;
	}
	if (node != NULL)
	{
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (len_nodes);
}
