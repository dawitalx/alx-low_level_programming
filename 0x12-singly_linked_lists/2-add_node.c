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
	list_t *new_node;
	unsigned int len = 0;

	while(str[len])
		len++;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (new_node);
}
