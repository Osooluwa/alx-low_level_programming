#include "lists.h"

/**
 * list_len - find the num of elements in 
 * a linked list_t list.
 * @h: the a linked list_t list.
 * Return: the num of elements in h
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
