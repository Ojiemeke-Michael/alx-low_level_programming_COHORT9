#include "lists.h"

/**
 * free_list - functions that frees a list_t list.
 *
 * @head: pointer to the beginning of the list.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}
