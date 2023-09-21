#include "lists.h"

/**
 * free_list - will free a linked list
 * @head: item to be deleted
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
