#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*free_listint2 -free list of node
*
*@head : double pointer to head of linked lists
*
*Return: void.
*/
void free_listint2(listint_t **head)
{
	listint_t *currentNode, *nextNode;

	currentNode = *head;
	while (currentNode != NULL)
	{
	nextNode = currentNode->next;
	free(currentNode);
	currentNode = nextNode;
	}
	*head = NULL;

}
