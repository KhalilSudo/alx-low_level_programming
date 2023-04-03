#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*add_nodeint_end -add node at end of list
*
*@head :pointer to head of linked list
*
*@n :integer
*Return: pointer to the newNode.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *endNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	endNode = *head;
	while (endNode->next != NULL)
	{
		endNode = endNode->next;
	}
	endNode->next = newNode;

	return (newNode);
}
