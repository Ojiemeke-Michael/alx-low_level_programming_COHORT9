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

	while (h != NULL)
	{
		elem_num++;
		h = h->next;
	}

	return (elem_num);
}
