#include "lists.h"
/**
 * listint_len - prints all the elements of a linked list
 * @h: pointer to the linked list
 * Return: number of elements in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
