#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*print_listint -print list of node
*
*@h :head of linked lists
*
*Return: Number of nodes.
*/
size_t listint_len(const listint_t *h)
{
	size_t nbNodes;

	nbNodes = 0;
	while (h != NULL)
	{
		h = h->next;
		nbNodes++;
	}
	return (nbNodes);
}
