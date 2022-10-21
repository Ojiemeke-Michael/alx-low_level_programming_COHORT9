#include "lists.h"

/**
 * add_node - a function that adds a new
 * node at the beginning of a list_t list.
 *
 * @head: double pointer to the previous node
 * @str: str to copiedinto new->str.
 *
 * Return: new pointer on success.
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t new;

	i = 0;

	if (!(head && str))
		return (NULL);

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	new->str = strdup(str);

	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str != '\0')
		i++;

	str->len = i;

	new->next = head;
	*head = new;

	return (new);
}
