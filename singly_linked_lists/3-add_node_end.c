#include "lists.h"
#include <string.h>
int _strlen(char *s);
/**
* add_node_end - adds a new node at the end of a list_t list.
* @head: pointer to pointer to struct
* @str: givin string
*
* Return: new node.
*/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *current;

	new_node = malloc(sizeof(list_t));
	if (!new_node)
		return (NULL);
	new_node->str = strdup(str);
	if (!new_node->str)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen((char *)str);
	new_node->next = NULL;
	if (!*head)
	{
		*head = new_node;
		return (new_node);
	}
	current = *head;
	while (current->next != NULL)
		current = current->next;
	current->next = new_node;
	return (new_node);
}
/**
 * _strlen - print the length of string
 * @s: variable pointer
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
