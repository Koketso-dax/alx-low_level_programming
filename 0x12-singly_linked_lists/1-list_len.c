#include "lists.h"

/**
 * list_len - will return len of node chain
 * @h: chain nodes
 * Returns: Node len
 */

size_t list_len(const list_t *h)
{
	size_t node_len = 0;

	while(h)
	{
		node_len++;
		h = h->next;
	}
	return (node_len);
}
