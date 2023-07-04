#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
*add_nodeint -add node at begining of line
*
*@head :pointer to head of linked list
*
*@n :integer
*Return: pointer to the newNode.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	if (head == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
