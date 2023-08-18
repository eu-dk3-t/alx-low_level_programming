/**
 * File name:
 * 	4-free_dlistint.c
 * Description:
 * 	Frees memory occupied by a list
 * Author:
 * 	eu-dk3-t
 */

#include "lists.h"

/**
 * Function name:
 * 	free_dlistint
 * Description:
 * 	Frees up memory occupied by a double linked list.
 * NTK:
 * 	@head: Pointer to the head of the double linked list.
 * Return: 
 * 	Void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
