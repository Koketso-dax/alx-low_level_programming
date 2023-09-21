#include "lists.h"
/**
 * print_list - prints all nodes of a linked list
 * @h: linked list
 * Return: size of linked list
 */
size_t print_list(const list_t *h)
{
	size_t list_nodes = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);
		list_nodes++;
		h = h->next;
	}
	return (list_nodes);
}
