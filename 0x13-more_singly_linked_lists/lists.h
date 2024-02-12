#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked lists
 * @n: integer
 * @next: poits to the next node
 * Description: singly linked listsnode structure
 * for Holberton
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} lintint_t;

/**
 * struct listp_s - singly linked list
 * @p: pointers of nodes
 * @next: points to the next node
 * Description: singly linked list of pointers
 */

typedef struct listp_s
{
	void *p;
	struct listp_s *next;
} listp_t;

size_t print_listint(const listint_t *h);

#endif
