#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*get_nodeint_at_index -get node at index
*
*@head :head of linked lists
*
*@index :index of node
*
*Return: Number of nodes.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	 unsigned int nbNodes;

	for (nbNodes = 0; nbNodes < index; nbNodes++)
	{
		if (head != NULL)
			head = head->next;
	}

	return (head);
}
