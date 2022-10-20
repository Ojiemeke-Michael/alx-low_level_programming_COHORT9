#include "lists.h"

/**
 * print_list -  function that prints all the elements of a list_t list.
 *
 * @h: pointer to node in a singly linked lists.
 *
 * Return: the number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	unsigned int count;

	count = 0;
	if (h)
	{
		while (h != NULL)
		{
			if (h->str == NULL)
				printf("[0] (nil)\n");
			else
				printf("[%d] %s\n", h->len, h->str);
			count++;
			h = h->next;

		}
	}

	return (count);
}
