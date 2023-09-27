#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list (can free lists with a loop)
 * @h: pointer to head of singly linked list
 *
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *lst = *h, *lst2;
	unsigned int count = 0;

	if (lst == 0 || h == 0)
		return (0);

	lst = *h;
	while (lst != 0)
	{
		lst2 = lst;
		lst = lst->next;
		count++;

		free(lst2);

		if (lst2 <= lst)
			break;
	}

	*h = 0;
	return (count);
}
