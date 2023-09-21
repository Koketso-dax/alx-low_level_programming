#include "lists.h"
/**
 * add_node - will add node to beginning of list
 * @head: head item of list
 * @str: str to add
 * Return: updated list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	size_t len = 0;

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
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
