#include "lists.h"
/**
 * print_listint - prints all elements of a listint_t list
 * @h: listint_t list
 * Return: size of list
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}
	return (num);
}
