/**
 * File name:
 * 	7-insert_dnodeint.c
 * Description:	
 * 	Inserts a node at the nth position
 * Author:
 * 	eu-dk3-t
 */


#include "lists.h"

/**
* Function name:
* 	insert_dnodeint_at_index 
* Description:
* 	Inserts a node at the nth position
* NTK:
* 	@h: pointer to pointer to head
*	@idx: index
* 	@n: value to go in new node
* Return: 
* 	- Node address
* 	- NULL
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *new = malloc(sizeof(dlistint_t));
	unsigned int count = 0;

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*h == NULL)
	{
		*h = new;
		return (*h);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	while (temp != NULL)
	{
		if (count == idx && idx != 0)
		{
			new->next = temp;
			new->prev = temp->prev;
			temp->prev->next = new;
			temp->prev = new;
			return (new);
		}
		count++;
		temp = temp->next;
	}
	if (count == idx)
		return (add_dnodeint_end(h, n));
	return (NULL);
}
