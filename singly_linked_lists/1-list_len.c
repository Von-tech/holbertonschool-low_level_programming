#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * list_len - lists number of elements in linked list
 * @h: pointer to number
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t cont = 0;

	while (h)
	{
		cont++;
		h = h->next;
	}

	return (cont);
}
