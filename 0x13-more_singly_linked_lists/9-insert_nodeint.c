#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at given index
 *
 * @head: pointer to the head of the linked list
 * @idx: index at which to insert the new node
 * @n: value of the new node
 *
 * Return: pointer to the head of the modified
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int nbNodes;
	listint_t *newNode, *prevNode, *currNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (*head);
	}

	prevNode = *head;
	currNode = *head;
	for (nbNodes = 0; nbNodes < idx; nbNodes++)
	{
		prevNode = currNode;
		currNode = currNode->next;
		if (currNode == NULL && nbNodes < idx - 1)
		{
			free(newNode);
			return (NULL); /* index out of bounds, return NULL */
		}
	}

	newNode->next = currNode;
	prevNode->next = newNode;

	return (*head);
}
