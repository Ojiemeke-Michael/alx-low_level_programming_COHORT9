#include "lists.h"

/**
* add_node_end - function that adds a new node at the end of a list_t list.
*
* @head: points to the head.
* @str: string to be inputed.
*
* Return:pointer newly created node on success.
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode, *last;

	unsigned int i;

	i = 0;
	if (!(head && str))
	{
		return (NULL);
	}

	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	newNode->next = NULL;

	while (newNode->str[i] != '\0')
		i++;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}

	last = *head;

	while (last)
		last = last->next;

	last->next = newNode;

	return (newNode);
}
