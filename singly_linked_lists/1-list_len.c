#include "lists.h"
#include <stddef.h>
/**
* list_len - counts the number of elements in linked list.
* @h: pointer to a structer list
*
* Return: number of elements.
*/
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
