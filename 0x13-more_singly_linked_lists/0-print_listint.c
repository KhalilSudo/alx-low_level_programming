#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*print_listint -print list of node
*
*@h :head of linked lists
*
*return nombre of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t nbNodes;

	nbNodes = 0;
	while (h != NULL)
	{
		printf("%d/n", h->n);
		h = h->next;
		nbNodes++;
	}
	return (nbNodes);
}
