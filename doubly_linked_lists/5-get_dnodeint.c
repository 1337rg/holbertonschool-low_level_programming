#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns
 * the nth node of a dlistint_t linked list.
 * @head: My list
 * @index: The integer for searching index
 * Return: NULL or the list index
 */


dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i = 0;

	tmp = head;

	while (tmp != NULL)
	{
		if (i == index)
			return (tmp);

		tmp = tmp->next;
		i++;
	}

	return (NULL);
}
