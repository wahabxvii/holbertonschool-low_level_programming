#include "lists.h"
/**
* dlistint_len - counts the number of elements in linked list.
* @h: pointer to struct list
*
* Return: number of elements.
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}

