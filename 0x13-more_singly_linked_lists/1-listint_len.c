#include "lists.h"

/**
 * listint_len - will return number of elements in list
 * @h: input list
 * Return: size_t of listint
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}
	return (num);
}
