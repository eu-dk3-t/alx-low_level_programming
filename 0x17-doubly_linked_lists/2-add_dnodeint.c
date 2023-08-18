/**
 * File name:
 * 	1-dlistint_len.c
 * Description:
 * 	Counts num of elements in
 * 	a list
 * Author:
 * 	eu-dk3-t
 */


#include "lists.h"

/**
 * Function name:
 * 	add_dnodeint 
 * Description:
 * 	Adds a new node at the beginning of a dlistint_t list.
 * NTK:
 * 	@head: A pointer to the head of the dlistint_t list.
 *	@n: The integer for the new node to contain.
 * Return:
 * 	- NULL
 *	- Node address
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;

	return (new);
}
