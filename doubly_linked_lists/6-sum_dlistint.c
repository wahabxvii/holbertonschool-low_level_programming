#include "lists.h"
#include <string.h>
/**
* sum_dlistint - calculates the sum of n in head.
* @head: pointer to struct
*
* Return: the sum.
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

