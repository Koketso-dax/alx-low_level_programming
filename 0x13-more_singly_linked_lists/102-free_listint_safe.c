#include "lists.h"
/**
 * free_listint_safe - safely frees list
 * @h: ptr to head of list
 * Return: num of elements
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int neg;
	listint_t *node;

	if (!h || !*h)
	{
		return (0);
	}

	while (*h)
	{
		neg = *h - (*h)->next;
		if (neg > 0)
		{
			node = (*h)->next;
			*h = node;
			len++;
		}
		else
		{
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;
	return (len);
}
