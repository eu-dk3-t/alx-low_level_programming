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
 * 	dlistint_len
 * Description:
 * 	 Counts the number of elements in a linked dlistint_t list.
 * NTK:
 *	 @h: The head of the dlistint_t list.
 *
 * Return: The number of elements in the dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}

