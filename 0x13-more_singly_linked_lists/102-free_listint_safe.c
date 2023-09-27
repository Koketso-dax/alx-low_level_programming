#include "lists.h"
/**
 * free_listint_safe - safely frees list
 * @h: ptr to head of list
 * Return: num of elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *node, *temp;

	if (!h || !*h)
	{
		return (0);
	}

	node = *h;

	while (node)
	{
		temp = node->next;
		free(node);
		node = temp;
		len++;

		if (node == *h)
		{
			break;
		}
	}
	*h = NULL;
	return (len);
}
