/**
 * File name:
 * 	5-get_dnodeint.c
 * Description: 
 * 	Retrieves nth node
 * Author:
 * 	eu-dk3-t
 */

#include "lists.h"

/**
 * Function name:
 * 	get_dnodeint_at_index
 * Description:
 * 	Retrieves the nth node of a double linked list.
 * NTK:
 * 	@head: Pointer to the head of the double linked list.
 * 	@index: The nth node to retrieve.
 * Return: 
 * 	- Null
 * 	- Address of the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	count = 1;

	if (head == NULL || index == 0)
		return (head);

	while (head != NULL)
	{
		if (count == index)
			return (head->next);
		head = head->next;
		count++;
	}
	return (NULL);
}
