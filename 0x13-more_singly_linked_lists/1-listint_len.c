#include "lists.h"
#include <stddef.h>

/**
 * main: check the code
 *
 * Return number of elements
 * Description : size_t listint_len(const listint_t *h)
 */

size_t listint_len(const listint_t *h)
{
	unsigned int size = 0;

	while(h != NULL)
	{
		printf("%i\n", h->n);
		h = h-> next;
		size++;
		return(size);
	}
}
