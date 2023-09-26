#include "lists.h"
/**
 * sum_listint - will return sum of all nodes in listint_t
 * @head: head node
 * Return: sum or 0 on fail.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
