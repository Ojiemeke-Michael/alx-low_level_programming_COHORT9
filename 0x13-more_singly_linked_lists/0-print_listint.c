#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 *
 * @h: head pointer that points to the single linked lists.
 *
 * Return: the number of nodes on success.
 */
size_t print_listint(const listint_t *h)
{
	unsigned int count;

	count = 0;
	if (h)
	{
		while (h)
		{
			printf("%d\n", h->n);
			count++;
			h = h->next;
		}
	}

	return (count);
}
