#include "lists.h"
#include <stdlib.h>
/**
* insert_dnodeint_at_index - inserts a new node at a given position.
* @h: double pointer to head of list
* @idx: index at node position
* @n: given integer
*
* Return: pointer to new node.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
	dlistint_t *prev;
	unsigned int i;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	current = *h;
	prev = NULL;
	i = 0;
	while (current != NULL && i < idx)
	{
		prev = current;
		current = current->next;
		i++;
	}
	if (current == NULL && prev == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = prev;
	new_node->next = current;
	if (prev != NULL)
		prev->next = new_node;
	if (current != NULL)
		current->prev = new_node;
	return (new_node);
}
