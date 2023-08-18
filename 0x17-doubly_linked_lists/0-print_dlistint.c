/**
 * File name:
 * 	0-print_dlistint.c
 * Description:
 * 	Prints all elements of
 * 	a dlistint_t list
 * Author:
 * 	eu-dk3-t
 */


#include "lists.h"

/**
 * Function name:
 * 	print_dlistint 
 * Description:
 * 	Prints all the elements of a dlistint_t list.
 * NTK:
 * 	@h: The head of the dlistint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
