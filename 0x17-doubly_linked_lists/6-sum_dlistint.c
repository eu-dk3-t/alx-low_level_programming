/**
 * File name:
 * 	6-sum_dlistint.c
 * Description:
 * 	Sums elements of a doubly linked list
 * Author:
 * 	eu-dk3-t
 */

#include "lists.h"

/**
 * Function name:
 * 	sum_dlistint 
 * Description:
 * 	Sums elements of a doubly linked list
 * NTK:
 * 	@head: pointer to head of DLL
 * Return: 
 * 	- Sum of all elements
 * 	- Null 
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
