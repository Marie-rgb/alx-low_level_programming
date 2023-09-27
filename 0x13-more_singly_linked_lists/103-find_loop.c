#include "lists.h"
#include <stdio.h>
/**
 * find_listint_loop - finds address of starting node in looped linked list
 * @head: pointer to the head in linked list to test
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *a, *b;

	if (!head)
		return (NULL);

	a = b = head;

	while (b && a && a->next)
	{
		b = b->next;
		a = (a->next)->next;

		if (a == b)
		{
			b = head;

			while (b && a)
			{
				if (b == a)
					return (b);

				b = b->next;
				a = a->next;
			}
		}
	}

	return (NULL);
}
