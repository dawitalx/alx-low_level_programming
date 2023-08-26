#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * add_node - add new node at the beginning
 * @head: orginal node
 * @srr: str to beadded
 * Return: address or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	typedef struct list_t
	{
		char *str;
		struct list_t *next;
	} list_t;

	if (str == NULL)
		return (NULL);

	list_t *newNode = (list_t *)malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);
	
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->next = *head;
	*head = newNode;
	
	return (newNode);
}
