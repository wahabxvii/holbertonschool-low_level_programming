#include "lists.h"
#include <stddef.h>
/**
* get_dnodeint_at_index - findes nth node of a dlistint_t linked list.
* @head: pointer to struct
* @index: number to travers nodes
*
* Return: the nth node.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	size_t count = 0;
	while (current && count < index)
	{
		current = current->next;
		count++;
	}
	return (current);
}
