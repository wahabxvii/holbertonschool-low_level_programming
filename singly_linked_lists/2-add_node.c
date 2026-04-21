#include "lists.h"
#include <stddef.h>
int _strlen(char *s);
/**
* add_node - adds a new node at the beginning of a list_t list.
* @head: duble pointer to list_t
* @str: pointer to string
*
* Return: new struct list.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = _strlen((char *)str);
	new_node->next = *head;
	*head = new_node;
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
