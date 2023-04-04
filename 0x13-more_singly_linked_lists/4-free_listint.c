#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*free_listint -free list of node
*
*@head :head of linked lists
*
*Return: void.
*/
void free_listint(listint_t *head)
{
	listint_t *currentNode, *nextNode;

	currentNode = head;
	while (currentNode != NULL)
	{
	nextNode = currentNode->next;
	free(currentNode);
	currentNode = nextNode;
	}

}
