#include "lists.h"

/**
 * free_list - functions that frees a list_t list.
 *
 * @head: pointer to the beginning of the list.
 */
void free_list(list_t *head)
{
	list_t temp_free;

	while (head)
	{
		temp_free = head;
		head = head->next;
		free(temp_free->str);
		free(head);
	}
}
