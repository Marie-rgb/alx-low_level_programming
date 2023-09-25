#include <stdio.h>
#include "lists.h"
#include <stddef.h>


/**
 * Main :check the code
 * Return :number of nodes
 *
 * Description : a function that prints all the elements of a listint_t list.
 */

size_t print_listint(const listint_t *h)
{
	unsigned int size = 0;

	while (h != NULL)
	{
		print("%i\n", h->n);
		h = h-> next;
		size++;}
	return(size);
}
