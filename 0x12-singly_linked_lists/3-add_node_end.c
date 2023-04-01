#include "lists.h"

/**
 * add_node - Adds a new node to the beginning of a list_t list.
 * @head: Pointer to pointer to head of the list.
 * @str: String to be added as the new node's str member.
 *
 * Return: Pointer to the newly added node, or NULL if memory allocation fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode, *tempNode;

	newNode = malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->len = strlen(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = NULL;

	if (*head == NULL)
	{
		(*head) = newNode;
	}
	else
	{
		tempNode = *head;
		while (tempNode->next != NULL)
		{
			tempNode = tempNode->next;
		}
		tempNode->next = newNode;
	}

	return (*head);
}
