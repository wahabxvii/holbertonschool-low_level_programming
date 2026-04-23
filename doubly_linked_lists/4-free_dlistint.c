#include "lists.h"
/**
* free_dlistint - frees a struct list.
* @head: pointer to node
*
* Return: nothing.
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *next;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}
