#include "lists.h"
/**
* insert_dnodeint_at_index - inserts a new node at a given position.
* @h: pointer to pointer to struct
* @idx: index of new node
* @n: given integer
*
* Return: new struct.
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	dlistint_t *current;
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
	i = 0;
	while (current != NULL && i < idx)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->prev = current->prev;
	new_node->next = current;
	current->prev = new_node;
	if (new_node->prev != NULL)
		new_node->prev->next = new_node;
	return (new_node);
}
