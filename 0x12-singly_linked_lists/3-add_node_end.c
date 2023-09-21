#include "lists.h"
/**
 * add_node_end - will add node item to end of list
 * @head: currect head item
 * @str: str to append
 * Return: ptr to new item
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len  = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (0);
	}
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		return (0);
	}
	new_node->next = NULL;
	new_node->len = len;

	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *n = *head;

		while (n->next != NULL)
		{
			n = n->next;
		}
		n->next = new_node;
	}
	return (new_node);
}
