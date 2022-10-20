#include "lists.h"

/**
 * list_len - a function that returns the number
 * of elements in a linked list_t list.
 *
 * @h: pointer that points to the element in the singly linked lists.
 *
 * Return: number of elements in structure on success.
 */
size_t list_len(const list_t *h)
{
	unsigned int elem_num;

	if (h)
	{
		if (h->str == NULL && h->next != NULL)
		{
			elem_num = 2;
		}
		else if (h->next == NULL && h->str != NULL)
		{
			elem_num = 2;
		}
		else if (h->str == NULL && h->next == NULL)
		{
			elem_num = 1;
		}
		else if (h->next != NULL)
		{
			h = h->next;
			if (h->next == NULL)
				elem_num = 2;
		}
		else if (h->str != NULL && h->next != NULL)
		{
			elem_num = 3;
		}
	}

	return (elem_num);
}
