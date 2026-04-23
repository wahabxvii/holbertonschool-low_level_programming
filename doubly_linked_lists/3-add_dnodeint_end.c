#include "lists.h"
#include <string.h>
/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list.
* @head: pointer to pointer to struct
* @n: givin number
*
* Return: new node.
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *trav;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		for (trav = *head;
	   trav->next != NULL; trav = trav->next)
			;
		trav->next = new_node;
		new_node->prev = trav;
	}
	return (new_node);
}
