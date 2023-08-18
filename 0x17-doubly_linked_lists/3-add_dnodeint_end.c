/**
 * File name:
 * 	3-add_dnodeint_end.c
 * Description:
 * 	Adds a node at the end of a list
 * Author:
 * 	eu-dk3-t
 */

#include "lists.h"

/**
 * Function name:
 * 	add_dnodeint_end
 * Description:
 * 	Adds a new node to the end of a double linked list.
 * NTK:
 * 	@head: Double pointer to the the beginning of the double linked list.
 * 	@n: The value that the new node will contain.
 * Return: 
 * 	- Null
 * 	- Node address
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->next = NULL;

	if (*head != NULL)
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;

		last->next = new;
		new->prev = last;
	}
	else
	{
		*head = new;
	}

	return (new);
}
