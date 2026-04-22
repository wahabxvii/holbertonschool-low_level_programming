#include "lists.h"
#include <string.h>
/**
* free_list - frees a list_t list.
* @head: pointer to struct
*
* Return: nothing.
*/
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		if (current->str != NULL)
			free(current->str);

		free(current);
		current = next_node;
	}
}
