#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index index.
 * @head: double pointer to head of list
 * @index: index at node
 *
 * Return: 1 if success or -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	dlistint_t *temp;
	unsigned int count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}
	current = *head;
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (current == NULL || count < index)
		return (-1);
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
